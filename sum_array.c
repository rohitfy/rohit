#include<stdio.h>
int main()
{
	int k,i,j,sum=0;
	scanf("%d",&i);
	int a[i];
	scanf("%d",&j);
	for(k=0;k<i;k++)
	scanf("%d",&a[k]);
	for(k=0;k<j;k++)
	sum+=a[k];
	printf("%d",sum);
	return 0;
}
