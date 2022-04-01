#include <stdio.h>
int n;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n-1;i++){
		for (int j = 1; j <= i; j++)
		{
			if(j==i||j==1) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	for (int i = 1; i <= n*2-1; ++i)
	{
		printf("*");
	}
	printf("\n");
	for(int i=n-1;i>=1;i--){
		for (int j = n*2-1; j >=1; j--)
		{
			//printf("*");
			if(j==1||i==j) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	return 0;
}

