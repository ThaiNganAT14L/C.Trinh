#include<stdio.h>
int main()
{
	int a;
	char b;
	printf("nhap ma ASCII: ");
	scanf("%d",&a);
	b=a;
	if(65<=a<91 && 96<a<=129) {if(a>=97) {printf("chu in HOA tuong ung: %c",b-32);}
						 else printf("chu in HOA tuong ung: %c",b);}
	else printf("loi")	;				 
}
