#include <stdio.h>
#define fio(i,a,b) for(int i=a;i<=b;i++)
int arr[1000005],n,i;
long long k;
int main(){
	scanf("%d%lld",&n,&k);
	fio(i,1,n) scanf("%d",&arr[i]);
	k=k-(k/n)*n;
	fio(i,k+1,n) printf("%d ",arr[i]);
	fio(i,1,k) printf("%d ",arr[i]);
	return 0;
}