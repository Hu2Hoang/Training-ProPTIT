#include <stdio.h>
#include<math.h>
long long a,b,c;
int main(){
	scanf("%lld%lld%lld",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a) printf("Yes");
	else printf("No"); 
	return 0;
}