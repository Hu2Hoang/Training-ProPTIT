#include <stdio.h>
#include <math.h>
long long n,k,temp=0,res=0;
int sqr(int x) {
    return x*x;
}
int powm(int a, int b) {
    if (b == 0) return 1 % 1000000007;
    else
        if (b % 2 == 0)
            return sqr(pow(a, b/2)) % 1000000007;
        else
            return a * (sqr(pow(a, b/2)) % 1000000007) % 1000000007;
}
int main(){
	scanf("%lld%lld",&n,&k);
	for(int i=1;i<=n;i++){
		temp+=powm(i,k);
	}
	res=temp%1000000007;
	printf("%lld",res);
	return 0;
}