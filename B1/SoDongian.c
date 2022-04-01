#include <stdio.h>
long long n;

int main(){
	scanf("%lld",&n);
	long long sum=0;
	while(n>0){
		sum+=n%10;
		n/=10;
	}
	while(sum>=10){
		sum=sum/10+sum%10;
	}
	printf("%lld",sum);
	return 0;
}