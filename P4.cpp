#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
long long n;
int main(){
	w(t){
		int res=0;
		scanf("%lld",&n);
		while(n>1){
			if(n%2!=0){
				n--;res++;
			}
		n/=2;
		}
		printf("%d\n",res+1);
	}
	return 0;
}
