#include <stdio.h>
#include<math.h>
double n;
int main(){
	scanf("%lf",&n);
	if(sqrt(n)==(int)sqrt(n)) printf("YES");
	else printf("NO");
	return 0;
}