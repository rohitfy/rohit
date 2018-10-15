#include<stdio.h>
int main()
{
	int a, temp, rev=0;
	scanf ("%d", &a);
	temp=a;	
	while(temp)
	{
	
	rev=((rev*10)+(temp%10));
	temp=temp/10;
	}
if (rev==a)
printf("palindrome");
else
printf("not palindrome");
}
