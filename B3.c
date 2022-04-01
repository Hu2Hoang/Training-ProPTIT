#include <stdio.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
int max(int a,int b){
	if(a>b) return a;
	else return b;
}
int i,n;
long long dem;
int b[122]={};
int a[1000001]={};
char s[1000001];
int main(){
	scanf("%d",&n);
	for(i=0;i<n+1;i++){
		scanf("%c",&s[i]);
		if(s[i]>=65&&s[i]<=90) s[i]=s[i]+32;
		a[i]=(int)s[i];
	}
	fio(i,1,n+1) b[a[i]]++;
	long long temp=0;
	temp=-1e6;
	for(i=0;i<=122;i++){
		temp=max(temp,b[i]);
	}
	if(temp > (n/2) )printf("So ugly");
	else printf("So beautiful");
	temp=0;
	return 0;
}
