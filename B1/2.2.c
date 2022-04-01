#include<stdio.h>
#include <math.h>
int x,y,m,n;
int main(){
	scanf("%d%d%d%d",&x,&y,&m,&n);
	long long res=0;
	res=abs(m-x)+abs(n-y);
	printf("%lld\n",res);
	return 0;
}