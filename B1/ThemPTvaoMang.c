#include <stdio.h>
int n,x,k;
int a[100005];
int timVT(int arr[100005],int n,int x){
	if(x>arr[n]) return n+1;
	for(int i=1;i<=n;i++){
		if(arr[i]>=x){
			return i;
			break;
		}
	}
}
void chen(int arr[10005],int n,int x,int k){
	for(int i=n+1;i>n;i--){
		a[i]=a[i-1];
	}
	a[k]=x;
}
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&x);
	//k=timVT(a,n,x);
	chen(a,n,x,k=timVT(a,n,k));
	n++;
	for(int i=1;i<=n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}