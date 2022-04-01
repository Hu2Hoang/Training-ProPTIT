#include <bits/stdc++.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
using namespace std;
int i,n,res=0;
char s;
int b[1000001]={};
int a[1000001]={};
int main(){
	scanf("%d",&n);
	char s[n];
	scanf("%s",s);
	for(i=0;i<s[i];i++){
		s[i]=tolower(s[i]);
		a[i]=(int)s[i];
	}
	for(i=0;i<n;i++){
		b[a[i]]++;
	}
	// int length=strlen(s);
	// for(i=0;i<)
	bool kt2=false;
	fio(i,97,124){
		if(b[i]>=2){
			kt2=true;
		
		}

	}
	if(kt2==false) printf("So beautiful");
	else printf("So ugly");
	return 0;
}
