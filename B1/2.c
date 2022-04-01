#include <stdio.h>
int n;
int main(){
	scanf("%d",&n);
	if((n>=2)&& (n<=8)){
		switch(n){
		case 2: printf("Thu Hai\n"); break;
		case 3: printf("Thu Ba\n"); break;
		case 4: printf("Thu Tu\n");break;
		case 5: printf("Thu Nam\n"); break;
		case 6: printf("Thu Sau\n"); break;
		case 7: printf("Thu Bay\n"); break;
		case 8: printf("Chu Nhat\n"); break;
		}
	}
	else{
		printf("Khong ton tai");
	}
	return 0;
}