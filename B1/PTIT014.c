#include <stdio.h>
int n;
int l2n(int n){
	if(n==0) return 1;
	switch(n%4){
		case 0: return 6 ;break;
		case 1: return 2;break;
		case 2: return 4;break;
		case 3: return 8;break;
	}
}
int main(){
	scanf("%d",&n);
	printf("%d",l2n(n));
	return 0;
}