#include <stdio.h>
long long n;
int main(){
	scanf("%lld",&n);
	for(int i=0;i<=30;i++){
		long long temp=n*i;
		printf("%lld x %d = %lld\n",n,i,temp);
	}
	return 0;
}