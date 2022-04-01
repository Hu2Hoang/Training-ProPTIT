#include <stdio.h>
//#define max(a,b) (((a)>(b))?(a):(b))
long long max(long long a,long long b){
	if(a>b) return a;
	else return b;	
}
int i,n;
long long res=0,sum=0;
long long a[1000003];
int main(){
	scanf("%d",&n);
	for( i=0;i<n;i++) scanf("%lld",&a[i]);
	res=a[0];
	for( i=0;i<n;i++){
		sum+=a[i];
		res=max(res,sum);
		if(sum<0) sum=0;
	}
	printf("%lld",res );
	return 0;
}
