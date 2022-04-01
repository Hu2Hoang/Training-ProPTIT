#include <stdio.h>
int n,k,res=0;
int main(){
	scanf("%d%d",&n,&k);
	res=n;
 	while(n>=k){
 		res+=n/k;
 		n=n/k+n%k;
 	}
	printf("%d",res);
	return 0;
}