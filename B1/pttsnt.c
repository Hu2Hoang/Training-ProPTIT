#include <stdio.h>
#include<math.h>
int i,n,dem=0;
int main(){
	scanf("%d",&n);
	for(i = 2;i<=sqrt(n);i++){
		if(n%i==0){		
			while(n%i==0){
				dem++;
				n/=i;
			}
			printf("%d %d\n",i,dem);
		}
	}
	//10 = 2*5
	//Kiem tra n con lai(5) in ra n
	if(n>1) printf("%d 1",n);		
	return 0;
}