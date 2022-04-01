#include<stdio.h>
#include<math.h>
//#define fio(i,a1,b1) for(i=a1;i<b1;i++)
//#define w(t) int t;scanf("%d",&t);while(t--)
int n,i=0,temps=0,s=0;
int main(){
	scanf("%d",&n);
	while(s<=n){
		i++;
		temps+=i;
		s+=temps;
	}
	printf("%d\n",i );
	return 0;
}