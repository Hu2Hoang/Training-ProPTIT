#include <stdio.h>

int a,b;
int main(){
	scanf("%d%d",&a,&b);
	long long res=((b-a+1)*(a+b))/2;
	printf("%lld\n",res);
	return 0;
}
