#include <stdio.h>
#include<math.h>
int n,i,tmp,temp,res=0;
int snt(int b){
	int q;
	if(b<2) return 1;
	tmp=0;
	for( q=2;q<=sqrt(b);q++){
		if(b%q==0) tmp++; 
	}
	if(tmp==0) return 0;
	else return 1;
	//return 0;
}
int ssnt(int c){
	while(c>0){
		if(snt(c)==1) return 1;
		c/=10;
	}
	return 0;
}
int main(){
	scanf("%d",&n);
	if(n<2) printf("-1");
	else{
		for(i=1;i<=n;i++){
		if(ssnt(i)==0) printf("%d ",i);
		//else printf("-1");
	}
	}
	
	return 0;
}