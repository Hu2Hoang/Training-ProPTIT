#include <stdio.h>
#include <math.h>
float x1,y1,x2,y2,r1,r2;
int main(){
	scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&r1,&r2);
	float oo=sqrt(pow((x1-x2),2)+ pow((y1-y2),2));
	float temp=r1+r2;
	if(oo<temp) printf("Cut");
		else if(oo>temp) printf("Don't Cut");
		else if(oo<abs(r1-r2)) printf("Cut");
	else printf("Touch");
	return 0;
}