#include <stdio.h>
int a,b,c,temp;
int main(){
	scanf("%d%d%d",&a,&b,&c);
	if(a<b){
		temp=a;
		a=b;
		b=temp;
	}
	if(a<c){
		temp=a;
		a=c;
		c=temp;
	}
	if(b<c){
		temp=b;
		b=c;
		c=temp;
	}
	printf("%lld %lld %lld",a,b,c);
	return 0;
}