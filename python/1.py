def reverse_number(number):
    reversed_number = int(str(number)[::-1])
    return reversed_number

# 获取用户输入
number = int(input("请输入一个数字: "))
print(reverse_number(number))