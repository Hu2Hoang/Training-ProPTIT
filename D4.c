#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
long long a,b;
long long ucln(long long a, long long b) {
    int tmp;
    while(b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
int main(){
	scanf("%lld%lld",&a,&b);
	long long uc=ucln(a,b);
	long long bc;
	bc=(a*b)/uc;
	printf("%lld %lld\n",uc,bc);
	return 0;
}