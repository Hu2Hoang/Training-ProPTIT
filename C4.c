#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
int i=0,n,t;
int a[100]={};
int main(){
	long long sum=0;
		n=0;
		char kt=' ';
		while(kt!='\n'){
			scanf("%d",&a[i]);
			n++;i++;
			kt=getchar();
		}
	fio(i,0,n){
		sum+=a[i];
	}
	printf("%lld",sum-(n-1) );
	return 0;
}