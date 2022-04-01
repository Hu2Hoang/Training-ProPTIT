#include<stdio.h>
#include<math.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
int n,i;
int dd[123];
int main(){
	w(t){
		scanf("%d",&n);
		char s[n];
		//scanf("%s",s);
		int temp;
		for(int i=0;i<=n;i++){
			scanf("%c",&s[i]);
			temp=(int)s[i];
			printf("%d ",temp);
			dd[temp]++;
			//printf("%c ",s[i] );
		}
		//printf("%s\n",s );
		fio(i,0,n) printf("%d ",dd[i]);
		printf("\n");
		n=0;
	}
	
	return 0;
}