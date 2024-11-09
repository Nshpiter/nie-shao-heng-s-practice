#include<stdio.h>
	int main(void)
	{  
	  /*********Begin*********/
	  int m,n,a;
      scanf("%d %d",&m,&n);
      int b = m;
      int c = n;
      while (n!=0){
          a = m % n;
          m=n;
          n=a;       
      }
      printf("最大公约数是:%d\n",m);
      printf("最小公倍数是:%d\n",(b*c)/m);
	  /*********End**********/ 
       return 0;
	}