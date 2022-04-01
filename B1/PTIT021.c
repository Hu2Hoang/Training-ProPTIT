#include <stdio.h>
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int n,tmax,tmin;
int a[100005];

int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	tmax=a[1];tmin=a[1];
	for (int i = 1; i <=n; ++i)
	{
		tmax=max(tmax,a[i]);
		tmin=min(tmin,a[i]);
	}
	int res=tmax-tmin-n+1;
	printf("%d",res);
	return 0;
}