#include <stdio.h>
int i;
int main(){
	int n,k,x,j=0;
	scanf("%d%d%d",&n,&k,&x);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//n++;
	for(i=n+1;i>=k;i--){
		a[i]=a[i-1];
	}
	a[k-1]=x;
	n++;
	for(i=0;i<n;i++){
		j++;
		printf("%d - %d\n",j, a[i]);
	}
	return 0;
}