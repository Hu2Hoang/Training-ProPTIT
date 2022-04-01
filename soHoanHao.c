#include <stdio.h>
int n,res;
int shh(int h){
	for(int i=1;i<=h-1;i++){
		if(h%i==0) res+=i;
	}
	if(res==h) return 0;
	else return 1;
}
int main(){
	scanf("%d",&n);
	if(shh(n)==0) printf("YES");
	else printf("NO");
	return 0;
}
