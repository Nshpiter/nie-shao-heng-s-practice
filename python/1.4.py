import requests
from bs4 import BeautifulSoup

def get_article_content():
    url = "https://www.bitecode.dev/p/a-year-of-uv-pros-cons-and-should"
    headers = {
        'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) Chrome/91.0.4472.124'
    }
    
    try:
        response = requests.get(url, headers=headers)
        if response.status_code == 200:
            soup = BeautifulSoup(response.text, 'html.parser')
            
            # 获取文章标题
            title = soup.find('h1')  # 通常文章标题在h1标签中
            if title:
                print("文章标题:")
                print(title.text.strip())  # strip()用于去除多余空格
                print("\n" + "="*50 + "\n")  # 分隔线
            
            # 获取文章正文
            # 通常文章内容在article标签或特定class的div中
            article = soup.find('article')
            if article:
                # 获取所有段落
                paragraphs = article.find_all('p')
                print("文章内容:")
                for p in paragraphs:
                    text = p.text.strip()
                    if text:  # 只打印非空段落
                        print(text)
                        print()  # 段落间空行
            
            # 保存到文件
            with open('article.txt', 'w', encoding='utf-8') as f:
                f.write(f"标题：{title.text.strip()}\n\n")
                for p in paragraphs:
                    text = p.text.strip()
                    if text:
                        f.write(text + "\n\n")
            
            print("\n文章已保存到 article.txt")
                
    except Exception as e:
        print(f"错误：{str(e)}")

if __name__ == "__main__":
    get_article_content()