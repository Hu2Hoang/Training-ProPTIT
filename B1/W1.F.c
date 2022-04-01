#include <stdio.h>
float m,g;
int main(){
	scanf("%f%f",&m,&g);
	float bmi=g/(m*m);
	//printf("%f\n",(float)bmi);
	if(bmi<0.00185) printf("Thieu can");
	if(bmi>=0.00185 && bmi < 0.0025) printf("Trung binh");
	if(bmi>=0.0025 && bmi < 0.003) printf("Thua can");
	if(bmi>=0.003) printf("Beo phi");
	return 0;
}