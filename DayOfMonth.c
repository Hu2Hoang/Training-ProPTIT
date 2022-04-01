#include <stdio.h>
int n,k;
int leapY(int y){
	if(y%4==0)
		if(y%100==0)
			if(y%400==0)
				return 0;
			else return 1;
		else return 0;
	else 1;
}
int main(){
	scanf("%d%d",&n,&k);
	switch(n){
		case 1: printf("31");break;
		case 2: 
				if(leapY(k)==0) {printf("29");break;}
				else {printf("28");break;}
		case 3: printf("31");break;
		case 4: printf("30");break;
		case 5: printf("31");break;
		case 6: printf("30");break;
		case 7: printf("31");break;
		case 8: printf("31");break;
		case 9: printf("30");break;
		case 10: printf("31");break;
		case 11: printf("30");break;
		case 12: printf("31");break;
		default: printf("INVALID");
	}
	return 0;
}