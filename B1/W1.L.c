#include <stdio.h>
#include<math.h>
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int res=0;
	res=max(max(a,b),c);
	if(res==a) printf("Bong");
	if(res==b) printf("Vang");
	if(res==c) printf("La");
	return 0;
}