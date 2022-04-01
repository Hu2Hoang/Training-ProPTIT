#include <stdio.h>
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
long long max(long long a,long long b){
	if(a>b) return a;
	else return b;
}
int t;
long long i,n,a[10000001]={},f[10000001]={};
long long max2soklk(long long a[],long long n){
	long long mm;
		mm=a[0];
		fio(i,0,n) mm=max(mm,a[i]);
		if(n==1) return a[0];
		for(i=0;i<n;i++){
			f[i]=max( max(f[i-2]+a[i],f[i-1]), f[i-2]);
		}
		long long temp=f[0];
		fio(i,0,n) temp=max(temp,f[i]);
		return max(mm,temp);
}
int main(){
	scanf("%d",&t);
	while(t--){
		scanf("%lld",&n);
		fio(i,0,n){
			scanf("%lld",&a[i]);
		}
		printf("%lld\n", max2soklk(a,n));
	}
	return 0;
}