#include <stdio.h>
#include<string.h>
#include<math.h>

char s[1005];
int snt(int b){
	int q;
	if(b<2) return 1;
	int tmp=0;
	for( q=2;q<=sqrt(b);q++){
		if(b%q==0){
			tmp++; 
			break;
		}
	}
	if(tmp==0) return 0;
	else return 1;
	return 0;
}
int main(){
	scanf("%s",s);
	for(int i=0;i<strlen(s);i++){
		if(snt(i)==0) printf("*");
		else printf("%c",s[i]);
	}
	return 0;
}