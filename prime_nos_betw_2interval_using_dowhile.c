#include<stdio.h>
int checkPrime(int n);
int main()
{
	int limit,flag,i;
	printf("enter the limit:");
	scanf("%d", &limit);
	flag = checkPrime(i);
	if(flag == 0)
	{
		printf("%d", i);
	}
	return 0;
}
checkPrime(int n)
{
	int j,flag=0,i,limit;
	for(i=1;i<=limit;i++)
	{
		if(i == 1 || i == 0)
        continue;
        flag = 0;
		for(j=2;j<=n/2;j++)
	    {
		if(n%j == 0)
		  {
			flag = 1;
			break;
		  }
	    }
	}
	return 0;
}
