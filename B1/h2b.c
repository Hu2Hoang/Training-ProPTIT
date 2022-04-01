#include <stdio.h>
int n;
int main(){
	scanf("%d",&n);
	for(int i=n;i>=1;i--){
		//for(int q=n-i;q>0;q--) printf(" ");
		for(int j=i;j>=1;j--){
			if(j==i||j==1||i==n) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	return 0;
}




// #include <stdio.h>
// int n;
// int main(){
// 	scanf("%d",&n);
// 	for(int i=1;i<=n;i++){
// 		for(int j=1;j<=n;j++){
// 			if(i==1||j==n-i+1||j==1) printf("*");
// 			else printf(" ");
// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }
