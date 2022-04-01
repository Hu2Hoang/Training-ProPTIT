#include <stdio.h>
int i;
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int max=-1e9;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(max<a[i]*a[j]){
				max=a[i]*a[j];
			}
		}
	}
	printf("%d\n",max);
	return 0;
}