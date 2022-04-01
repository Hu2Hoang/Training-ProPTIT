#include<stdio.h>
int a,b;
int main(){
	scanf("%d%d",&a,&b);
	printf("%d + %d = %lld\n",a,b,(long long)a+b);
	printf("%d - %d = %lld\n",a,b,(long long)a-b);
	printf("%d * %d = %lld\n",a,b,(long long)a*b);
	printf("%d / %d = %.2f\n",a,b,(float)a/b);
	printf("%d mod %d = %lld\n",a,b,(long long)a%b);
	return 0;
}
