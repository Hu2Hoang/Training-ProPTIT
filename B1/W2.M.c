#include <stdio.h>
#include <math.h>
//char c[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
int main(){
	int n;scanf("%d",&n);
	int temp=n;
	for(int i=1-temp;i<temp;i++){
		for(int j=1-temp;j<temp;j++){
			printf("%c",(char)'`'+min((abs(i)),abs(j))+1 );
		}
		printf("\n");
	}
	return 0;
}

