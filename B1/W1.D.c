#include <stdio.h>
int n;
int main(){
	scanf("%d",&n);
	if(n%4==0)
		if(n%100==0)
			if(n%400==0)
				printf("YES");
			else printf("NO");
		else printf("YES");
	else printf("NO");
	return 0;
}