#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<=b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int i,n,m;
int a[200005];
long long sum[200005];
long long res[200005];
int main(){
	scanf("%d%d",&n,&m);
	//res[0]=0;
	fio(i,1,n) {
		scanf("%d",&a[i]);
		if(i<=m) sum[i]=a[i];
		else sum[i]=sum[i-m]+a[i];
	}
	res[0]=0;
	for(int i=1;i<=n;i++){
		res[i]=res[i-1]+sum[i];
	}
	for(int i=1;i<=n;i++) printf("%lld ",res[i] );
	//fio(i,0,n) printf("%d ",sum[i] );
	return 0;
}