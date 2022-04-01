#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
//#define fio(i,a1,b1) for(int i=a1;i<b1;i++)
//#define w(t) int t;scanf("%d",&t);while(t--)
int i;
int main(){
	char s1[1000],s2[1000];
	gets(s1);
	gets(s2);
	int dd[256]={0};
	//printf("%d",strlen(s2));
	for(int i=0;i<strlen(s1);i++){
		dd[s1[i]]=1;;
	}
	for(int i=0;i<strlen(s2);i++){
		if(dd[s2[i]]){
			dd[s2[i]]=2;
		}
	}
	for(int i=0;i<256;i++){
		if(dd[i]==2){
			printf("%c",i );
		}
	}
	return 0;
}