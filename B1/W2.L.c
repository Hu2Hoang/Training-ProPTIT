#include <stdio.h>
int n,res=1;
int check(int temp){
	switch(temp){
		case 0: return 1; break;
		case 1: return 1; break;
		case 2: return 2; break;
		case 3: return 6; break;
		case 4: return 4; break;
		case 5: return 2; break;
		case 6: return 2; break;
		case 7: return 4; break;
		case 8: return 2; break;
		case 9: return 8; break;
	}
}
int result(int n){
	int a=n/5;int b=n%10;
	int tmp=(n/10)%10;
	if(n<10) return(check(n));
	if(tmp%2==0) res=(6*result(a)*check(b))%10;
	else res=(4*result(a)*check(b))%10;
	return res;
}
int main(){
	scanf("%d",&n);
	printf("%d\n",result(n));
	return 0;
}