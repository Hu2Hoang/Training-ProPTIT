#include <stdio.h>
#include <math.h>
long long a1,b1,a2,b2,a3,b3;
int main(){
	scanf("%lld%lld%lld%lld%lld%lld",&a1,&b1,&a2,&b2,&a3,&b3);
	long long s=a1*b1+a2*b2+a3*b3;
	if(sqrt(s)==(int)sqrt(s)) printf("%.0f",sqrt(s));
	else printf("0");
	return 0;
}