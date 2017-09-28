#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("nhap so ngay: ");
	scanf("%d",&a);
	b=a/365;
	c=a%365;
	d=c/30;
	e=c%30;
	printf("%d nam %d thang %d ngay",b,d,e);
}
