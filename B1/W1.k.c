#include <stdio.h>

int a,b;
int main(){
	scanf("%d%d",&a,&b);
	printf("%lld\n%lld\n%lld\n%lld\n%lld\n%lld",(long long)a+b,(long long)a-b,(long long)a*b,(long long)a/b,(long long)a%b,(long long)a*a*a);
	return 0;
}