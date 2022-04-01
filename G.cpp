#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
long long i,n,res=0,a[200005],tong=0,tich,j;

int main(){
	scanf("%lld",&n);
	for(int i=0;i<n;i++) scanf("%lld",&a[i]);
	for(i=0;i<n;i++){
		tong=a[i];
		tich=a[i];
		for(j=i+1;j<n;j++){
			tong+=a[j];
			tich*=a[j];
			if(tong==tich&&(j-i>=2)) res++;
		}
	}
	printf("%lld",res );
	return 0;
}