import requests
from bs4 import BeautifulSoup

def get(url):
    response = requests.get(url)
    if response.status_code == 200:
        分析器 = BeautifulSoup(response.text,'html.parser')
        内容 = 分析器.get_text()
        print(内容)
    else:
        print("失败了")
url = "https://blog.npiter.tech"
get(url)    