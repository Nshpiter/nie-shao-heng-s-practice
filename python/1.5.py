import requests
from bs4 import BeautifulSoup

def get_page_content():
    url = "https://npiter.us.kg"
    headers = {
        'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) Chrome/91.0.4472.124'
    }

    try:
        response = requests.get(url,headers=headers)
        if response.status_code == 200:
            soup = BeautifulSoup(response.text,'html.parser')
            
            title = soup.find('title').text
            print(f'页面标题：{title}')

            links = [a.get('href') for a in soup.find_all('a')]
            print("\n找到的链接:")
            for link in links:
                if link:
                    print(link)
            
            images = [img.get('src') for img in soup.find_all('img')]
            print("\n找到的图片:")
            for img in images:
                if img:
                    print(img)

            return {
                'title':title,
                'links':links,
                'images':images
            } 

    except Exception as e:
        print(f"错误：{str(e)}")
        return None
    
if __name__ == "__main__":
    result = get_page_content()
    if result:
        print("\n爬取成功！")