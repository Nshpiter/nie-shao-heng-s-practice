import requests

# 定义请求的URL
url = "https://9um3yhdu-pear-421353.hf.space/hf/v1/chat/completions"

# 定义请求头
headers = {
    "Content-Type": "application/json"
}

# 定义请求体
data = {
    "model": "claude-3-5-sonnet-latest",
    "messages": [
        {"role": "user", "content": "你好，请介绍一下你自己。"}
    ]
}

# 发送POST请求
response = requests.post(url, headers=headers, json=data)

# 打印响应内容
if response.status_code == 200:
    print(response.json())
else:
    print(f"请求失败，状态码: {response.status_code}")
    print(response.text)
