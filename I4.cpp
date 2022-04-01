#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
long long b,p,i;	
int main(){
	w(t){
		scanf("%lld%lld",&b,&p);
		int res=1;
		for( i=sqrt(p);i<=b;i++){
			if((i*i - 1) %p ==0) res++;
		}
		printf("%d\n",res);
		res=0;
	}
	return 0;
}