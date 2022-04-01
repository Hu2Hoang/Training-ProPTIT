#include <stdio.h>
int n;
double sum=1;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		sum=sum+1.0/(2*i+1);
	}
	printf("%.6f",sum);
	return 0;
}