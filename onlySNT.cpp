#include <bits/stdc++.h>
using namespace std;

long dem=0;
long a,b;

// Ham kiem tra SNT
int checkSNT(int temp1){
	if(temp1<2) return 0;
	for (int i = 2; i <= sqrt(temp1); ++i)
	{
		if (temp1 % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
//Kiem tra tong cac chu so
int tcs(int temp3){
	int tmp=0,tong=0;
	while(temp3 > 0){
		tmp=temp3 % 10;
		tong += tmp;
		temp3 /= 10;
	}
	if (checkSNT(tong)==1)
	{
		return 1;
	}else return 0;

}
// Tach tung so de kiem tra
int tach(int temp2){
	int tmp2 = 0;
	while(temp2 > 0){
		tmp2 = temp2 % 10;
		if(checkSNT(tmp2)==0) return 0;
		temp2 /= 10;
	}
	return 1;
}

int main()
{
	cin>>a>>b;
	for (int i = a; i <=b; ++i)
	{
		if(checkSNT(i)==1 && tach(i)==1 && tcs(i)==1){
			dem++;
		}
	}
	cout<<dem;
	return 0;
}
