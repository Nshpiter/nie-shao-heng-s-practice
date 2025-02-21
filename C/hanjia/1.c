#include<stdio.h>
#define PI 3.14
	int main(void)
	{  
	  /*********Begin*********/
	  double r,h,C1,Sb,Vb;
      scanf("%lf,%lf",&r,&h);
	  C1 = 2 * PI * r;
      Sb = 4 * PI * r * r;
      Vb = PI * r * r * h;
      printf("C1=%.2lf\nSb=%.2lf\nVb=%.2lf\n",C1,Sb,Vb);
	  /*********End**********/ 
       return 0;
	}
