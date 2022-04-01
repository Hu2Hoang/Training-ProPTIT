#include <stdio.h>
int t;
long long n;
long long a[1000005]={};
int main(){
	long long m1,m2;
	m1=m2=-1e9;
	scanf("%d",&t);
	while(t--){
		scanf("%lld",&n);
		for(int i=0;i<n;i++){
			scanf("%lld",&a[i]);
			if(m1<a[i]){
				m2=m1;m1=a[i];
			}
			else if(m1>a[i]&&a[i]>m2){
				m2=a[i];
			}
		}
		if(m1!=-1e9 && m2!=-1e9) printf("%lld %lld\n",m2,m1);
		else printf("0");
		m1=m2=-1e9;
	}
	return 0;
}