#include <stdio.h>
#include<string.h>
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
int i,n,t;

int main(){
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int a[n]={};
		memset(a,0,sizeof(a));
		fio(i,0,n) scanf("%lld",&a[i]);
		int m1=-1e9,m2=-1e9;
		fio(i,0,n){
			if(a[i]>m1){
				m2=m1;m1=a[i];
			}
			else if(a[i]<m1 && a[i]>m2){
				m2=a[i];
			}
			else{
				m1=m2=0;
			}
		}
		if(m1!=0&&m2!=0) printf("%d %d\n",m2,m1);
		else printf("0");
	}
	return 0;
}