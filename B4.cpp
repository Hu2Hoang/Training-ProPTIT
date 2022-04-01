#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
long long n,i;
long long a[100005],res[100005],b[100005];
long long sum=0,s=0;;
int main(){
	scanf("%lld",&n);
	fio(i,0,n-1){
		scanf("%lld",&a[i]);
		b[i]=a[i];
		b[i]+=b[i-1];
		sum+=b[i];
	}
	s=n*(n+1)/2 - sum;
	if(s%n!=0) printf("-1");
	else{
		res[0]=(n*(n+1)/2 - sum)/n;
		bool check=true;
		fio(i,0,n-1){
			res[i+1]=res[i]+a[i];
			if(res[i+1]>n || res[i+1]<1 ){
				check=false;
				break;
			}
		}
		if(check==true){
			fio(i,0,n) printf("%lld ",res[i]);
		}
		else printf("-1");
	}
	
	return 0;
}