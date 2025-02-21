import base64
from tqdm import tqdm
import os
import time

def is_base64(s):
    """检查字符串是否是base64编码"""
    try:
        # 检查字符集
        if not all(c in "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=" for c in s.strip()):
            return False
        # 尝试解码
        decoded = base64.b64decode(s)
        # 检查解码后的内容是否仍然是base64
        return all(32 <= byte <= 126 for byte in decoded)
    except:
        return False

def decode_base64_file(file_path, chunk_size=1024 * 1024):  # 1MB chunks
    try:
        # 获取文件大小
        file_size = os.path.getsize(file_path)
        total_chunks = file_size // chunk_size + (1 if file_size % chunk_size else 0)

        print(f"开始处理文件: {file_path}")
        print(f"文件大小: {file_size / (1024 * 1024 * 1024):.2f} GB")

        decode_count = 0
        current_output = 'temp_output.txt'
        previous_output = file_path

        while True:
            decode_count += 1
            print(f"\n开始第 {decode_count} 次解密...")

            # 创建输出文件
            with open(current_output, 'wb') as output_file:
                with open(previous_output, 'rb') as file:
                    # 使用tqdm显示进度条
                    with tqdm(total=total_chunks, desc=f"第 {decode_count} 次解密进度") as pbar:
                        # 分块读取和处理
                        buffer = ""
                        while True:
                            chunk = file.read(chunk_size)
                            if not chunk:
                                # 处理最后可能残留的buffer
                                if buffer:
                                    try:
                                        decoded = base64.b64decode(buffer)
                                        output_file.write(decoded)
                                    except:
                                        pass
                                break

                            # 将chunk转换为字符串并添加到buffer
                            chunk_str = chunk.decode('utf-8', errors='ignore')
                            buffer += chunk_str

                            # 找到完整的base64字符串（按4的倍数分割）
                            valid_length = (len(buffer) // 4) * 4
                            if valid_length > 0:
                                try:
                                    to_decode = buffer[:valid_length]
                                    decoded = base64.b64decode(to_decode)
                                    output_file.write(decoded)
                                    buffer = buffer[valid_length:]
                                except:
                                    # 如果解码失败，移动一个字符继续尝试
                                    buffer = buffer[1:]

                            pbar.update(1)

            # 检查是否需要继续解密
            with open(current_output, 'r', encoding='utf-8', errors='ignore') as f:
                sample = f.read(1024)  # 读取前1024个字符用于检测
                if not is_base64(sample):
                    # 如果不是base64，说明解密完成
                    print(f"\n解密完成！总共进行了 {decode_count} 次解密")

                    # 如果不是第一次解密，删除临时文件
                    if previous_output != file_path:
                        os.remove(previous_output)

                    # 重命名最终输出文件
                    final_output = r'E:\decoded_output.txt'
                    if os.path.exists(current_output):
                        try:
                            # 确保文件句柄已关闭
                            if 'output_file' in locals():
                                output_file.close()
                            if 'file' in locals():
                                file.close()

                            # 等待一段时间，确保文件未被占用
                            time.sleep(1)

                            # 重命名文件
                            if os.path.exists(final_output):
                                os.remove(final_output)
                            os.rename(current_output, final_output)
                            print(f"最终结果已保存到 {final_output}")
                        except Exception as e:
                            print(f"重命名文件时出错: {str(e)}")
                    break

            # 准备下一轮解密
            if previous_output != file_path:
                os.remove(previous_output)
            previous_output = current_output
            current_output = 'temp_output.txt' if current_output == 'decoded_output.txt' else 'decoded_output.txt'

            # 更新文件大小用于下一轮进度显示
            file_size = os.path.getsize(previous_output)
            total_chunks = file_size // chunk_size + (1 if file_size % chunk_size else 0)

    except FileNotFoundError:
        print(f"错误：找不到文件 {file_path}")
    except Exception as e:
        print(f"解密过程中出现错误：{str(e)}")
        # 清理临时文件
        if os.path.exists('temp_output.txt'):
            os.remove('temp_output.txt')

# 使用示例
file_path = r'E:\index.txt'  # 修改为你的文件路径
decode_base64_file(file_path)