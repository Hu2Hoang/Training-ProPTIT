#include<stdio.h>
#include<math.h>
//#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
long long size[100];
long long n,k;
char fbcix(long long n,long long k){
	while(n>2){
		if(k<=size[n-2]) n-=2;
		else{
			k-=size[n-2];
			n-=1;
		}
	}
	if(n==1) return 'A';
	if(n==2) return 'B';
}
int main(){
	size[1]=size[2]=1;
	for(int i=3;i<100;i++){
		size[i]=size[i-2]+size[i-1];
	}
	w(t){
		scanf("%d%d",&n,&k);
		printf("%c\n",fbcix(n,k));
		n=0;k=0;
	}
	return 0;
}