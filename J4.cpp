#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int n;
long long sinh(int n,int sum,int i){
	if(sum>=n) return sum;
	long long mu3;
	mu3=pow(3,i);
	if(mu3>=n) return mu3;
	long long m1=sinh(n,sum,i+1);
	long long m2=sinh(n,sum+mu3,i+1);
	if(m1<m2)
		return m1;
	else return m2;
}
int main(){
	w(t){
		scanf("%d",&n);
		printf("%d\n",sinh(n,0,0));
	}
	return 0;
}