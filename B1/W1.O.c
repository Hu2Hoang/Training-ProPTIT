#include <stdio.h>
#include<math.h>
long long a,b,c;
int main(){
	scanf("%lld%lld%lld",&a,&b,&c);
	long long res=0;
	if(a%c==0) res=((b/c) -(a/c) +1 );
	else res=((b/c)-(a/c));
	printf("%lld",res);
	return 0;
}