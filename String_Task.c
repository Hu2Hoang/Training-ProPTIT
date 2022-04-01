#include <stdio.h>
#include<ctype.h>
char s[1005];
int i;
int main(){
//	freopen("String_Task.inp","r",stdin);
//	freopen("String_Task.out","w",stdout);
	scanf("%s",s);
	//printf("%d",strlen(s));
	//for(i=0;i<s[i];i++) 
	for ( i = 0; i < s[i]; ++i)
	{	s[i]=tolower(s[i]);	
		if((s[i]=='a')||(s[i]=='o')||(s[i]=='y')||(s[i]=='e')||(s[i]=='u')||(s[i]=='i')){
			continue;
		}
		else {
			printf(".");
			printf("%c",s[i]);
		}
	}

	return 0;
}
