#网站爬取
import requests
from bs4 import BeautifulSoup

def get_webpage_content(url):
    try:
        # 发送GET请求获取网页内容
        headers = {
            'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/91.0.4472.124 Safari/537.36'
        }
        response = requests.get(url, headers=headers)
        response.encoding = response.apparent_encoding  # 自动检测编码
        
        # 确保请求成功
        if response.status_code == 200:
            # 使用BeautifulSoup解析HTML
            soup = BeautifulSoup(response.text, 'html.parser')
            
            # 获取所有文本内容
            text = soup.get_text()
            print("网页内容：")
            print(text)
            
            # 获取所有链接
            links = soup.find_all('a')
            print("\n网页中的链接：")
            for link in links:
                print(link.get('href'))
                
        else:
            print(f"请求失败，状态码：{response.status_code}")
            
    except Exception as e:
        print(f"发生错误：{str(e)}")

# 使用示例
if __name__ == "__main__":
    url = "https://www.example.com"  # 替换为你想爬取的网站
    get_webpage_content(url)