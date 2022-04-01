#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
long long n;
int i,temp=1,tmp=0;
int a[10000]={};
int main(){
	scanf("%lld",&n);
	for(i=1;i<=sqrt(n);i++){
		if(n%i==0){
			tmp=n/i;
			if(tmp==i){
				printf("%d ",i);
			}
			else{
				printf("%d ",i);

				a[temp]=tmp;
				temp++;
			}
		}
	}
	//printf("%d",temp);
	for(i=temp-1;i>0;i--) printf("%d ",a[i]);
	return 0;
}