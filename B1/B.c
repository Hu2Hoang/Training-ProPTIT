#include <stdio.h>
#define min(a,b) (((a)<(b))?(a):(b))
int n,k=1;
char sp=' ';
int main(){
	
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		
		for(int j=1;j<=n*2-1;j++){

			if((i==j||j==n*2-i)){
				printf("%d",min(i,j));
			}
			if(i!=j&&j<n*2-i) printf("%c",sp);
		}
		printf("\n");
	}
	for(int i=n-1;i>=1;i--){
		for (int j=1; j<= n*2-1; ++j)
		{
			if(i==j||j==n*2-i){
				printf("%d",min(i,j));
			} 
			if(i!=j&&j<n*2-i) printf("%c",sp);
		}
		printf("\n");
	}
	return 0;
}