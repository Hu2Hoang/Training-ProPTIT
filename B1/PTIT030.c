#include <stdio.h>
#include <math.h>
float xa,xb,xc,ya,yb,yc,xd,yd;
float stamgiac(float xA, float yA, float xB, float yB, float xC, float yC)
{
	float s=(float)abs(xA*yB-xB*yA+xB*yC-xC*yB+xC*yA-xA*yC)/2;
    return s;
}
int main(){
	scanf("%f%f%f%f%f%f%f%f",&xa,&ya,&xb,&yb,&xc,&yc,&xd,&yd);
	float abc=stamgiac(xa,ya,xb,yb,xc,yc);
	float dab=stamgiac(xd,yd,xa,ya,xb,yb);
	float dac=stamgiac(xd,yd,xa,ya,xc,yc);
	float dbc=stamgiac(xd,yd,xb,yb,xc,yc);
	//float d=dab+dac+dbc-abc;
	if(abc==dab+dac+dbc) printf("YES");
	else if(dab==0||dab==0||dbc==0) printf("NO");
	else if(abc<dab+dac+dbc) printf("NO");
	return 0;
}