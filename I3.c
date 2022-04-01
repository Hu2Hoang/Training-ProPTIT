#include <stdio.h>
int n,k,res=0;
int a[105];
int main(){
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		if(k>0&&a[i]%k==0) res++;
	}
	printf("%d",res);
	return 0;
}