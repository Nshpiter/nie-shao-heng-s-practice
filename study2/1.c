	  int s=0;
      int n=0;
      int x=1;
      scanf("%d",&n);
      if (n>0){
            for (int i=1;i<=n;i++){
              x=x*i;
              s+=x;
            }
      printf("%d",s);
      }
      else if (n<0){
          printf("0");
      }else printf("1");