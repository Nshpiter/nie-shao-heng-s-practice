#include<stdio.h>
	int main(void)
	{  
	  /*********Begin*********/
      double x;
      scanf("%lf",&x);
      if (x < 0 && x != -3){
          printf("%.3lf",x * x + x - 6);
      }else if (x >= 0 && x < 10 && x != 2 && x != 3){
          printf("%.3lf",x * x - 5 * x + 6);
      }else {
          printf("%.3lf",x * x - x - 1);
      }
	  
	  /*********End**********/ 
       return 0;
	}