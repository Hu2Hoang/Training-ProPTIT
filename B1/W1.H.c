#include <stdio.h>
int n,u1,d;
int main(){
	scanf("%d%d%d",&n,&u1,&d);
	long long res=n*u1+n*(n-1)/2*d;
	printf("%lld",res);
	return 0;
}