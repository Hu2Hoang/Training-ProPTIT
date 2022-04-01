#include <stdio.h>
#include <math.h>
float x;
int main(){
	scanf("%f",&x);
	int temp=round(x);
	int n1,n2;
	if(temp > x){
		n1=temp;
		n2=n1-1;
	}
	else{
		n2=temp;
		n1=n2+1;
	}
	if(n1>n2) printf("%d %d\n",n2,n1);
	else printf("%d %d\n",n1,n2);
	return 0;
}