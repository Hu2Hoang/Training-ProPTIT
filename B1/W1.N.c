#include <stdio.h>
int xa,ya,xb,yb,xc,yc,xd,yd;
int main(){
	scanf("%d%d%d%d",&xa,&xb,&ya,&yb);
	scanf("%d%d%d%d",&xc,&yc,&xd,&yd);
	float d1=xa-xb;
	float dx1=ya-yb;
	//float dy1=xa*yb-xb*ya;

	float d2=xc-xd;
	float dx2=yc-yd;
	//float dy2=xc*yd-xd*yc;

	float a1=dx1/d1;//float b1=dy1/d1;
	float a2=dx2/d2;//float b2=dy2/d2;
	//float temp=b2-b1;
	float tmp=a1-a2;

	if(tmp!=0) printf("YES!\n");
	else printf("NO");
	return 0;
}
