#include <stdio.h>
int n;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i>=n-j+1) printf("*");
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
// 	for(int i=n;i>=1;i--){
// 		for(int q=n-i;q>0;q--) printf(" ");
// 		for(int j=i;j>=1;j--){
// 			printf("*");
// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }
