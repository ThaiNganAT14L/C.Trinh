#include<stdio.h>
int main()
{
	float a,b,c;
	printf("nhap a,b,c: ");
	scanf("%f %f %f",&a,&b,&c);
	if (a+b!=c && a+c!=b && b+c!=a){
									if(a==b or a==c or b==c){if (a==b==c){printf("tam giac deu");} 
															 else printf("tam giac can");} 
									else if(a*a==b*b+c*c or c*c==a*a+b*b or b*b==c*c+a*a) {printf("tam giac vuong");}
										 else printf("tam giac thuong");}
	else printf("khong la tam giac");									 
}
