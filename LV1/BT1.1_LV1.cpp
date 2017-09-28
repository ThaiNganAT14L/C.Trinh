//bt1
#include<stdio.h>
int main()
{
	float a,b,c;
	printf("nhap a= ");
	scanf("%f",&a);
	printf("nhap b= ");
	scanf("%f",&b);
	c=a;
	a=b ;
	b=c ;
	printf("gia tri a=%f, b=%f",a,b);
}
