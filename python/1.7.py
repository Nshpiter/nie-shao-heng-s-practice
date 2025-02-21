import requests
from bs4 import BeautifulSoup
import time
import json

def scrape_website(url):
    """
    综合网页爬取函数
    """
    # 请求头配置
    headers = {
        'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) Chrome/91.0.4472.124',
        'Accept': 'text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8',
        'Accept-Language': 'zh-CN,zh;q=0.9,en;q=0.8'
    }
    
    try:
        # 发送请求
        response = requests.get(url, headers=headers, timeout=10)
        response.encoding = response.apparent_encoding
        
        if response.status_code == 200:
            soup = BeautifulSoup(response.text, 'html.parser')
            
            # 收集数据
            data = {
                'title': soup.find('title').text.strip(),  # 网页标题
                'meta_description': soup.find('meta', attrs={'name': 'description'}).get('content') if soup.find('meta', attrs={'name': 'description'}) else '',  # 页面描述
                
                # 链接收集
                'links': [{'text': a.text.strip(), 'href': a.get('href')} 
                         for a in soup.find_all('a') if a.get('href')],
                
                # 图片收集
                'images': [{'alt': img.get('alt', ''), 'src': img.get('src')} 
                          for img in soup.find_all('img') if img.get('src')],
                
                # 段落文本
                'paragraphs': [p.text.strip() for p in soup.find_all('p') if p.text.strip()],
                
                # 标题文本
                'headings': {
                    f'h{i}': [h.text.strip() for h in soup.find_all(f'h{i}')]
                    for i in range(1, 7)
                },
                
                # 表格数据
                'tables': [
                    [[cell.text.strip() for cell in row.find_all(['th', 'td'])]
                     for row in table.find_all('tr')]
                    for table in soup.find_all('table')
                ]
            }
            
            # 保存数据
            timestamp = time.strftime('%Y%m%d_%H%M%S')
            filename = f'scrape_result_{timestamp}.json'
            
            with open(filename, 'w', encoding='utf-8') as f:
                json.dump(data, f, ensure_ascii=False, indent=2)
                
            print(f'成功爬取网页！数据已保存至 {filename}')
            return data
            
    except Exception as e:
        print(f'爬取错误: {str(e)}')
        return None

# 使用示例
if __name__ == "__main__":
    url = "https://gal.manshuo.ink/archives/4/"  # 替换为要爬取的网址
    result = scrape_website(url)