#include <stdio.h>
#include <math.h>
int a,b,c;
int main(){
	scanf("%d%d%d",&a,&b,&c);
	printf("a^2 + b^2 + c^2 = %lld\n",(long long)a*a+b*b+c*c);
	printf("a^3 + b^3 + c^3 = %lld\n",(long long)a*a*a+b*b*b+c*c*c);
	return 0;
}
