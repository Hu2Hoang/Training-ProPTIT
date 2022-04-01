#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
#define max(a,b) (((a)>(b))?(a):(b))
int i,n,res=0;
int a[1000000];	
int main(){
	scanf("%d",&n);
	fio(i,0,n) scanf("%d",&a[i]);
	int dp[n+5]={0};
	fio(i,0,n){
		dp[i]=1;
		for(int j=1;j<i;j++){
			if(a[i]>a[j]){
				dp[i]=max(dp[i],dp[j]+1);
			}
		res=max(res,dp[i]);
		}
	}
	printf("%d ",res);
	return 0;
}