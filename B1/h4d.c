#include <stdio.h>
#include <math.h>
int n,temp;

int snt(int b){
	int q;
	if(b<2) return 1;
	int tmp=0;
	for( q=2;q<=sqrt(b);q++){
		if(b%q==0){
			tmp++;
			break;
		} 
	}
	if(tmp==0) return 0;
	else return 1;
	return 0;
}
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			while(snt(temp)!=0){
				temp++;
			}		
			printf("%d ",temp);
			temp++;
		}
		printf("\n");
	}
	return 0;
}

