#include<stdio.h>
int main()
{
	float a;
	int b;
	printf("nhap a=");
	scanf("%f",&a);
	b=a;
	if(a-b==0){printf("%f la so nguyen",a);} else printf("%f khong la so nguyen");
}
