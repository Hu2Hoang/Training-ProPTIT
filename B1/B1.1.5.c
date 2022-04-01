#include <stdio.h>
#include<math.h>
int xa,xb,xc,ya,yb,yc;
int main(){
	scanf("%d%d%d%d%d%d",&xa,&ya,&xb,&yb,&xc,&yc);
	double a = sqrt(pow((xa-xb),2)+pow((ya-yb),2));
	double b = sqrt(pow((xa-xc),2)+pow((ya-yc),2));
	double c = sqrt(pow((xc-xb),2)+pow((yc-yb),2));
	if(a+b>c ||a+c>b ||b+c>a){
		double p = (a+b+c)/2;
		double s = sqrt(p*(p-a)*(p-b)*(p-c));
		printf("%.2f\n",s);
	}
	else return 0;
	return 0;
}