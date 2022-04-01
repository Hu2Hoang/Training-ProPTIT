#include <stdio.h>
int res=0;
long long n,m,temp;
int main(){
	scanf("%lld%lld",&n,&m);
	if(m>3){
		temp=n-(n/m)*m;
		res=n/m;
		if(temp%3!=0) res=-1;
		else if(temp%3==0) res+=temp/3;
	}
	else if(m<3){
		temp=n-(n/3)*3;
		res=n/3;
		if(temp%m!=0) res=-1;
		else if(temp%m==0) res+=temp/m;
	}
	printf("%d",res);
	return 0;
}