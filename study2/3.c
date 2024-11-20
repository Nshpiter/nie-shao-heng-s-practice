#include <stdio.h>
#include <math.h>

int main()
{
	int sum = 0, n = 0, j, yes, high;
	//--------------错误区域开始------------------	
	scanf("%d", &high);
	while (high >= 2 && n < 10)
	{	
		yes = 1;
		for (j = 2; j <= sqrt(high); j++)
			if (high % j == 0)
			{	
				yes = 0; 
				break;
			}
		if (yes)
		{	
			sum += high;
			n++;
		}
		high--;
	}
	printf("sum=%d\n", sum);	
	//-----------错误区域结束---------------------
	return 0;
}