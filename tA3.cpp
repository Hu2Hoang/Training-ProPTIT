#include<iostream>
#include<stdio.h>
using namespace std;
int n,t;
int a[1000005];
	int main() {
		scanf("%d",&t);
    while(t--){
	  cin>>n;
	 int max, m2;
	 max = m2 = -1e9;
	  for(int i=0;i<n;i++){
	  	cin>>a[i];
	        if (a[i] > max) {
	            m2 = max;
	            max = a[i];
	        } else if (a[i] > m2 && a[i] < max) {
	            m2 = a[i];
	        }
	    }

	    if(m1!=-1e9&&m2!=-1e9) printf("%d %d", m2,max);
	    else printf("0");
	}
	return 0;
}