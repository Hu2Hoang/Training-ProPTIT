#include<stdio.h>
int main(){
	int a = 5 ,b=2;
	printf("%d\n", a+b);
	
	printf("%f \n", (float)a / b);
	printf("%f \n", a / (float)b);
	float temp = a/b;
	printf("%f \n", temp);  
	return 0;
}
