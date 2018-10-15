#include<stdio.h>
int main()
{
	int k,count=0;
	scanf("%d",&k);
	while(k)
	{
		count++;
		k/=10;
	}
	printf("%d",count);
	return 0;
}
