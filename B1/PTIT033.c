#include <stdio.h>
long long n,a,b;
int main(){
	scanf("%lld%lld%lld",&n,&a,&b);
	if(n%a==0&&n%b==0) printf("Co, tat ca!");
	else if(n%a==0&&n%b!=0) printf("Chi chia het cho %lld,",a);
	else if(n%a!=0&&n%b==0) printf("Chi chia het cho %lld.",b);
	else printf("Khong chia het cho so nao ca.");
	return 0;
}
