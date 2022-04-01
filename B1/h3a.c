#include <stdio.h>
#include<math.h>
int n,e;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		
		for(int j=1;j<=n*2-1;j++){
			if(abs(n-j)<=(i-1)) printf("*");
			else printf(" ");
		}
		
		printf("\n");
	}
	return 0;
}