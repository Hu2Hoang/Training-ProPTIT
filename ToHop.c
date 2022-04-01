#include <stdio.h>
#include<math.h>
int n,k,res=1;
int main(){
	scanf("%d%d",&n,&k);
	for(int i=1;i<=k;i++){
		res=res*n/i;
		n--;
	}
	printf("%d",res );
	return 0;
}