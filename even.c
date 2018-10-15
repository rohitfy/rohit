#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int c=a%2;
	if (c==0)
	printf("Even");
	else
	if(c==1)
	printf("Odd");
	else
	printf("invalid");
	return 0;
}
