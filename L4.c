#include<stdio.h>

long long n;
long long sum=0,temp;
int main(){
	scanf("%lld",&n);
	while(n>0){
		sum+=n%10;
		n/=10;
	}
	while(sum>=10){
		sum=sum/10+sum%10;
	}
	printf("%lld",temp );
	return 0;
}