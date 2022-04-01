#include <stdio.h>
#include <string.h>
int t,n;
long long k,x,sum=0,temp=0;
int main(){
	scanf("%d",&t);
	while(t--){
		scanf("%lld%lld%d",&x,&k,&n);
		sum=x;
		long long a[n]={};
		memset(a,0,sizeof(a));
		for(int i=0;i<n;i++){
			scanf("%lld",&a[i]);
			sum+=a[i];
		}
		if(sum>k) printf("YES\n");
		else printf("NO\n");
		sum=0;k=0;x=0;
	}
 	return 0;
 }