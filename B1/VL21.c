#include <stdio.h>
int n;
int main(){
	scanf("%d",&n);
	int sum=0,res;
	for(int i=1;i<=n;i++){
		sum+=i;
		if(sum>n){
			res=i-1;
			break;
		}
	}
	printf("%d",res);
	return 0;
}