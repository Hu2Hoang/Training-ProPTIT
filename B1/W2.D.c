#include <stdio.h>
#include<math.h>
int x,y,i,tmp,temp,res=0;
int snt(int b){
	int q;
	if(b<2) return 1;
	tmp=0;
	for( q=2;q<=sqrt(b);q++){
		if(b%q==0) tmp++; 
	}
	if(tmp==0) return 0;
	else return 1;
	return 0;
}
int tong(int a){
	while(a>0){
		temp+=a%10;
		a=a/10;
	}
	return temp;
}
int main(){
	scanf("%d%d",&x,&y);
	//int bn;
	int abc=x+1;
	for(i = abc ;i<=y;i++){
		if(snt(tong(i))==0) res++;
		temp=0;tmp=0;
	} 
	printf("%d\n",res);
	//printf("%d\n",check(y));
	return 0;
}
