#include <bits/stdc++.h>
#define fio(i,a1,b) for(i=a1;i<b;i++)
using namespace std;
int i,n,t,result;
int a[1000005],brr[1000005];
int check(int arr[], int n){

	if (a[0] > 1 || a[n-1] < 0){
  return result = 1;
}
for (i = 1; i < n - 1; i++){
   if (a[i] <= 0){
     if (a[i+1] <= 1) {
       continue;
     }
     else {
       return result = 1;
     }
   }
   else if(a[i] + 1 < a[i + 1]) {
     return result = a[i] + 1;
   }
}
return result = (a[i] + 1);
}


int main(){
	cin>>t;
	while(t--){
		
		cin>>n;
		fio(i,0,n){
			cin>>a[i];
		}
		result=check(a,n);
		cout<<result<<"\n";
	}
	return 0;
}