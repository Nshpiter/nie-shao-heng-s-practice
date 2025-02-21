import requests
from bs4 import BeautifulSoup

def get_page_content():
    url = "https://www.baidu.com"  # 改成百度的网址
    headers = {
        'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) Chrome/91.0.4472.124'
    }
    
    try:
        response = requests.get(url, headers=headers)
        if response.status_code == 200:
            soup = BeautifulSoup(response.text, 'html.parser')
            
            # 获取标题并打印
            title = soup.find('title').text
            print(f"页面标题: {title}")
            
            # 获取所有链接并打印
            links = [a.get('href') for a in soup.find_all('a')]
            print("\n找到的链接:")
            for link in links:
                if link:  # 确保链接不为空
                    print(link)
            
            # 获取所有图片URL并打印
            images = [img.get('src') for img in soup.find_all('img')]
            print("\n找到的图片:")
            for img in images:
                if img:  # 确保图片链接不为空
                    print(img)
            
            return {
                'title': title,
                'links': links,
                'images': images
            }
            
    except Exception as e:
        print(f"错误：{str(e)}")
        return None

# 主程序入口
if __name__ == "__main__":
    result = get_page_content()  # 调用函数
    if result:
        print("\n爬取成功！")