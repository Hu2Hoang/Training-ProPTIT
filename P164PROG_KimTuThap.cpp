#include<stdio.h>
#include<math.h>
int main(){
	scanf("%d",&n);
	while(s<=n){
		i++;
		temps+=i;
		s+=temps;
	}
	printf("%d\n",i -1);
	return 0;
}

#include<stdio.h>
#include<math.h>
int n,i=0,temps=0,s=0;
int main(){
	scanf("%d",&n);
	while(s<=n){
		i++;
		
		s+=i;
	}
	printf("%d\n",i );
	return 0;
}