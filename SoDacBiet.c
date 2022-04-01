#include <stdio.h>
long long n,temp;
int sum=0;
int main(){
	scanf("%lld",&n);
	temp=n;
	while(n>0){
		sum+=n%10;
		n/=10;
	}
	//printf("%d",sum);
	if(temp%sum==0) printf("YES");
	else printf("NO");
	return 0;
}