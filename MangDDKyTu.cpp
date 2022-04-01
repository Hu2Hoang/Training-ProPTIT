#include<stdio.h>
#include<math.h>
#include<string.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
#define w(t) int t;scanf("%d",&t);while(t--)
char s[1000],n[100];
int cnt[256];	
int main(){
	gets(n);
	gets(s);
	//printf("%s",s);
	int res=0;
	for(int i=0;i<strlen(s);i++){
		cnt[s[i]]++;
	}
	char kt;
	for(int i=0;i<256;i++){
		if(cnt[i]){
			if(cnt[i]>=res){
				res=cnt[i];
				kt=(char)(i);
			}
		}
	//	printf("%d ",cnt[i]);
	}
	printf("%c",kt);
	return 0;
}