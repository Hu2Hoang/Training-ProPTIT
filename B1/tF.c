#include <stdio.h>
int n,k,res=0,temp=0;
int main(){
	scanf("%d%d",&n,&k);
	res=n;
	do{
		res+=n/k;
		temp+=n%k;
		if(temp==k){
			res++;
		//	temp=0;
		}
	n=n/k;
	//if(n==0) break;
	}while(n!=0);
 
	printf("%d",res);
	return 0;
}