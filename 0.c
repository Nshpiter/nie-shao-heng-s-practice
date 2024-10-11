    /*program2_1.c
    *圆的面积计算
    */
    #include <stdio.h>
    #define PI 3.14
    int main()
    {
        float r, area;
        printf("请输入半径：");
        scanf("%f",&r);
        area=PI*r*r;
        printf("面积为：%f.\n",area);
        return 0;
    }
