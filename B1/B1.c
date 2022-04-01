#include<stdio.h>
int a,b;
int main(){
	scanf("%d%d",&a,&b);
	printf("a + b = ");printf("%lld\n",(long long)a+b);
	printf("a - b = ");printf("%lld\n",(long long)a-b);
	printf("a * b = ");printf("%lld\n",(long long)a*b);
	printf("a / b = ");printf("%lld\n",(long long)a/b);
	printf("a mod b = ");printf("%lld\n",(long long)a%b);
	return 0;
}
