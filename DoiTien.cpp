#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int n,res=0;
int a[]={1000,500,200,100,50,20,10,5,2,1};	
int main(){
	w(t){
		scanf("%d",&n);
		fio(i,0,10){
			res+=n/a[i];
			n%=a[i];
		}
		printf("%d\n",res);
		res=0;
	}
	return 0;
}