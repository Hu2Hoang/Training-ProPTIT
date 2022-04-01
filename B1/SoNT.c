#include <stdio.h>
#include<math.h>
int n,res=0;
int main(){
	scanf("%d",&n);
	if(n<2) printf("No\n");
	else{
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0) res+=1;
			break;
		}
		if(res==1) printf("No\n");
		else printf("Yes\n");
	}	
	return 0;
}