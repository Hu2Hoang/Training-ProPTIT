#include<bits/stdc++.h>
//const double c=1000000007
long long n,k;
long long temp=0,res=0;

int64_t Pow(int64_t a, int64_t b) {
    a %= 1000000007;
    int64_t result = 1;
    while (b > 0) {
        if (b & 1)
            result = result * a % 1000000007;
        a = a * a % 1000000007;
        b >>= 1;
    }
    return result;
}

int main(){
	scanf("%lld%lld",&n,&k);long long tmp=0;
	for (long long i = 1; i <=n; ++i)
	{
	    
	    tmp += Pow(i,k);
		//temp=temp+(tmp%(1000000007));
	}
	res=tmp%1000000007;
	printf("%lld\n",res );
	return 0;
}