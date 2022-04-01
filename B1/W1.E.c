#include <stdio.h>
int n,h,m,s;
int main(){
	scanf("%d",&n);
	h = n/3600;
	int temp = n - h*3600;
	m = temp/60;
	s=temp-m*60;
	if(h>=10) printf("%d:",h);else printf("0%d:",h);
	if(m>=10) printf("%d:",m);else printf("0%d",m);
	if(s>=10) printf("%d\n",s);else printf("0%d\n",s);
	return 0;
}