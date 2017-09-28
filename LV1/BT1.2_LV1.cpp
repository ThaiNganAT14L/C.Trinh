#include<stdio.h>
int main()
{
	int a,b,c;
	printf("nhap so giay: ");
	scanf("%d",&a);
	b=a/60;
	c=a%60;
	printf("%d phut %d giay",b,c);
}
