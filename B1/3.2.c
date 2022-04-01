#include <stdio.h>
int n;
int res=0;
int main(){
	scanf("%d",&n);
	while(n>0){
		res+=n%10;
		n=n/10;
	}
	printf("%d\n",res );
	return 0;
}