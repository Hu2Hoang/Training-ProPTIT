#include <stdio.h>
int i,n,t;
long long a[100005]={};
int main(){
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%lld",&a[i]);
		}
		int m1,m2;
		m1=m2=-1e9;
		for(int i=0;i<n;i++){
			if(a[i]>m1){
				m2=m1;
				m1=a[i];
			}else if(a[i]<m1&&a[i]>m2){
				m2=a[i];
			}
		}
		if(m1>0&&m2>0)
		printf("%d %d",m2,m1);
		else printf("0");
	}
	return 0;
}