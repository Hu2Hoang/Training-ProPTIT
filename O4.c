#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
int x1,y1,x2,y2;
int x1,y1,x2,y2;
int main(){
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	//Khoang cach 2 dinh -> dich sang x dv (+x||y)
	if(x1==x2) printf("%d %d %d %d\n",x1+y2-y1,y1,x2+y2-y1,y2);
	else if(y1==y2) printf("%d %d %d %d",x1,y1+x2-x1,x2,y2+x2-x1);
	//Cheo nhau
	else if(abs(x2-x1)==abs(y2-y1)) printf("%d %d %d %d",x1,y2,x2,y1);
	else printf("-1");
	return 0;
}