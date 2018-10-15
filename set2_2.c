#include<stdio.h>
int main()
{
	int n , temp, rev=0;
	scanf("%d",&n);
     temp==n;
     while(temp)
	{
		temp= (rev*10+n%10);
		rev=n/10;
	}
	if( temp==n)
	printf("palindrome");
	else
	printf("not palindrome");
}
