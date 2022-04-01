#include <stdio.h>
int xa,ya,xb,yb,xc,yc,xd,yd;
int main(){
	scanf("%d%d%d%d",&xa,&ya,&xb,&yb);
	scanf("%d%d%d%d",&xc,&yc,&xd,&yd);
//	float d1=xa-xb;
	float a1=xb-xa;float y1=yb-ya;
	float a2=xd-xc;float y2=yd-yc;
	if((a2/a1)!=(y2/y1)) printf("YES!");
	else printf("NO");
	return 0;
}