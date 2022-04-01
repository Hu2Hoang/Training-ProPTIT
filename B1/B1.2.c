#include <stdio.h>
int n,h,m,s;
int check(int n){
	if(n>=10) return 1;
		else return 0;
	//return 1;
}
int main(){
	scanf("%d",&n);
	h = n/3600;
	int temp = n - h*3600;
	m = temp/60;
	s=temp-m*60;
	if(check(h)==1){

		if(check(m)==1)
			if(check(s)==1)
				printf("%d:%d:%d\n",h,m,s);
			else printf("%d:%d:0%d\n",h,m,s);
		else if(check(s)==1) printf("%d:0%d:%d\n",h,m,s);
				else printf("%d:0%d:0%d\n",h,m,s);
	}
	if((check(h)==0)&&(check(m)==1)&&(check(s)==1)) printf("0%d:%d:%d\n",h,m,s);
	if((check(h)==0)&&(check(m)==1)&&(check(s)==0)) printf("0%d:%d:0%d\n",h,m,s);
	if((check(h)==0)&&(check(m)==0)&&(check(s)==1)) printf("0%d:0%d:%d\n",h,m,s);
	if((check(h)==0)&&(check(m)==0)&&check(s)==0) printf("0%d:0%d:0%d\n",h,m,s);
	return 0;
}
