#include <stdio.h>
long long n,vc=0,c=0,d1=0,d2=1;
int main(){
	scanf("%lld",&n);
	while(vc<n){
		vc+=d1;
		d1++;
	}
	while(c<n){
		c+=d2;
		d2+=2;
	}
	if(vc==n && d1>=3 || c==n&&d2>=4) printf("YES");
	else printf("NO");
	return 0;
}