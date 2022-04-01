#include <stdio.h>
#include <math.h>
int x,y,dem=0,res=0;
int check(int a){
	for (int q = 1; q <= sqrt(a); q++)
	{
		if(a%q==0){
			if(a/q==q) dem++;
			else dem+=2;
		}

	}
	// if(dem%2==0) return 1;
	// else return 0;
	//return 0;
	return dem;
	//dem=0;
}
int main(){
	scanf("%d%d",&x,&y);
	for(int i=x+1;i<y;i++){
		//printf("%d %d\n",i,check(i));
		if(check(i)%2!=0) res++;
		dem=0;
	}
	printf("%d\n",res);
	return 0;
}