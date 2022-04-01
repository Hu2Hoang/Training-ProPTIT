#include <stdio.h>

// int 4 d
// long 8 lld 
// float 4
// double 8
// char 1 

int n;
int main(){
	scanf("%d",&n);
	long long res=(n*(1+n))/2;
	printf("%lld",res);
	return 0;
}
