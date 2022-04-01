#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
long long l,r,i,n;
int q;
long long tong(long long a){
	while(a>0){
		int res=0;
		res+=a%10;
		a/=10;
	}
}
int main(){
	// w(t){
	// 	scanf("%lld%d",&n,&q);
	// 	while(q--){
	// 		scanf("%lld%lld",&l,&r);

	// 	}
	// }
	printf("%lld",tong(1234));
	return 0;
}