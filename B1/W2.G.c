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
int main(){
	scanf("%d",&x);
	if(snt(x)==0){
		int temp=0;
		while(x>0){
			temp+=x%10;
			x=x/10;
		}
		if(snt(temp)==0) printf("YES");
		else printf("NO");
	}
	else printf("NO");

	return 0;
}
