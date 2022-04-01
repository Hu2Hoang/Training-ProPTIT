#include <stdio.h>
int n;
int main(){
	scanf("%d",&n);
	int can=n%10;int chi=n%12;
	switch(can){
		case 0: printf("Canh "); break;
		case 1: printf("Tan "); break;
		case 2: printf("Nham "); break;
		case 3: printf("Quy "); break;
		case 4: printf("Giap "); break;
		case 5: printf("At "); break;
		case 6: printf("Binh "); break;
		case 7: printf("Dinh "); break;
		case 8: printf("Mau "); break;
		case 9: printf("Ky "); break;
	}
	switch(chi){
		case 0: printf("Than\n");break;
		case 1: printf("Dau\n");break;
		case 2: printf("Tuat\n");break;
		case 3: printf("Hoi\n");break;
		case 4: printf("Ty\n");break;
		case 5: printf("Suu \n");break;
		case 6: printf("Dan\n");break;
		case 7: printf("Mao\n");break;
		case 8: printf("Thin\n");break;
		case 9: printf("Ti\n");break;
		case 10: printf("Ngo\n");break;
		case 11: printf("Mui\n");break;
	}
	return 0;
}