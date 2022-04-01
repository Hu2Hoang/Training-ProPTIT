#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define min(a,b) (((a)<(b))?(a):(b))
long long n,i;
long long a[1000005],res[1000005];
long long sum=0;int minn=0;
int main(){
	scanf("%lld",&n);
	fio(i,0,n-1){
		scanf("%lld",&a[i]);
		sum+=a[i];
		minn=min(sum,minn);
	}
	res[0]=1-minn;
	bool check=true;
	fio(i,0,n-1){
		res[i+1]=res[i]+a[i];
		if(res[i+1]>n || res[i+1]<1){
			check=false;
			break;
		}
	}
	if(check==true){
		fio(i,0,n) printf("%lld ",res[i]);
	}
	else printf("-1");
	return 0;
}