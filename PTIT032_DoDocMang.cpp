#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int n;
int a[200005];
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	int l,r;
	a[0]=a[n+1]=1e9;
	for(int i=1;i<=n;i++){
		l=i;r=i;
		while(a[l]>a[l-1]) l--;
		while(a[r]>a[r+1]) r++;
		printf("%d ",r-l+1);
	}
	return 0;
}