#include <stdio.h>  
#define PI 3.14  
  
int main() {  
    float r, area;  
    printf("请输入半径：");  // 修改了分号和冒号的错误  
    scanf("%f", &r);  
    area = PI * r * r;  
    printf("面积为：%.2f\n", area);  // 修改了格式说明符，并添加了小数点后的精度  
    return 0;  // 添加了分号  
}