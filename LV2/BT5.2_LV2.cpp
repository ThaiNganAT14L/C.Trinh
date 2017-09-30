#include<stdio.h>
int main()
{
	int d,m,y;
	printf("nhap ngay/thang/nam");
	scanf("%d %d %d",&d,&m,&y);
	if (0<d<=31&&0<m<=12) {
						 if(m==1 or m==3 or m==5 or m==7 or m==8 or m==10 or m==12){ if (d==31&& m==12){printf("ngay ke tiep:ngay 1 thang 1 nam %d",y+1);}
						 															 if(d==31&& m!=12) {printf("ngay ke tiep:ngay 1 thang %d nam %d",m+1,y);}
						 															 if(d!=31) {printf("ngay ke tiep:ngay %d thang %d nam %d",d+1,m,y);}}
						 else if(m==2) {if (y%100!=0){
						 								if (d>29&& y%4==0){printf("loi");}
						 								if(d>28&& y%4!=0){printf("loi");}
						 								if (d==29&& y%4==0){printf("ngay ke tiep:ngay 1 thang 3 nam %d",y);}
						 								if(d<29&& y%4==0) {printf("ngay ke tiep:ngay %d thang 2 nam %d",d+1,y);}
						 								if(d<28&& y%4!=0) {printf("ngay ke tiep:ngay %d thang 2 nam %d",d+1,y);}
						 								if(d==28&& y%4!=0) {printf("ngay ke tiep:ngay 1 thang 3 nam %d",y);}}
						 				if (y%100==0) {	if(d>28){printf("loi");}
						 								if(d<28) {printf("ngay ke tiep:ngay %d thang 2 nam %d",d+1,y);}
						 								if(d==28) {printf("ngay ke tiep:ngay 1 thang 3 nam %d",y);}}}			
						 	  if(m==4 or m==6 or m==9 or m==11) {if(d==30) {printf("ngay ke tiep:ngay 1 thang %d nam %d",m+1,y);}
						 		   								 if(d<30) {printf("ngay ke tiep:ngay %d thang %d nam %d",d+1,m,y);}
																 if(d>30){printf("loi");}}}			
	else printf("loi");}
