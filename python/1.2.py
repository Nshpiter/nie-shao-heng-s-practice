import requests
from bs4 import BeautifulSoup

def get_baidu_title():
    url = "https://baidu.com"
    headers = {
        'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) Chrome/91.0.4472.124'
    }

    try:
        response = requests.get(url,headers=headers)

        if response.status_code == 200:

            网页 = BeautifulSoup(response.text,'html.parser')

            标题 = 网页.find('title')
            print(f"百度首页的标题是:{标题.text}")

        else:
            print(f"访问失败，错误代码:{response.status_code}")
    except Exception as 错误:
        print(f"错误:{str(错误)}")
if __name__ == "__main__":
    get_baidu_title()