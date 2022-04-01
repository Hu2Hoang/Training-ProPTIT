#include <bits/stdc++.h>
using namespace std;

int a,b,i,t;
bool check(int temp){
	int tmp = sqrt(temp);
	if(tmp*tmp == temp) return true;
	else return false;

	return true;
}
int main(){
	cin>>t;
	while(t--){
		cin>>a>>b;
		int count = 0;
		for (int i = a; i <=b; ++i)
		{
			if (check(i)) count++;
		}
		cout<<count<<'\n';
	}
	return 0;
}
