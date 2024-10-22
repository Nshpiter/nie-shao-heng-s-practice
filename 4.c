#include <stdio.h>
#include <math.h>

int main() {
    double angle;
    double radians;
    const double PI = 3.14159265358979323846;

    printf("角度\t正弦值\t余弦值\n");
    for (angle = 0; angle <= 360; angle += 5) {
        radians = angle * (PI / 180); // 将角度转换为弧度
        printf("%3.0f\t%8.4f\t%8.4f\n", angle, sin(radians), cos(radians));
    }

    return 0;
}