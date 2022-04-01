#include <stdio.h>
//#define max(a,b) (((a)>(b))?(a):(b))
long long max(long long a,long long b){
	if(a>b) return a;
	else return b;	
}
int i,n;
long long res[1000005],dem[1000005],sum=0;
long long a[1000003];
int main(){
	scanf("%d",&n);
	for( i=1;i<=n;i++) scanf("%lld",&a[i]);
	for( i=1;i<=n;i++){
		sum+=a[i];
		dem[i]=i;
		res[i]=sum/i;
		
	}
	int mtb,kq;
	for(int i=0;i<n;i++){
		if(mtb>res[i]){
			kq=dem[i];
		}
	}
	printf("%d",kq );
	return 0;
}
