#include<stdio.h>
	int main(void)
	{  
      int x[5];
      int total=0;
      for (int i=0;i<5;i++){
        scanf("%d",&x[i]);
        total+=x[i];
      }  
      double ave=total/5.0;  
      printf("%d %.2f",total,ave);
       return 0;
	}