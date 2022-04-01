#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
int i,n,res,x;
int a[100005],b[100005];
int main(){
	while(scanf("%d",&x)!=-1){
		a[++n]=x;
		b[x]=n; 
	}
	res=0;b[n+1]=1e9;
	for(i=n;i>=1;i--){
		if(b[i]>=b[i+1]){
			b[i]=1;
			res++;
		}
	}
	printf("%d\n",res);
	return 0;
}