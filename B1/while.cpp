#include <bits/stdC++.h>
using namespace std;
const int ID = 123;
const int password = 123456;
int main(){
	int i=1;
	while(i<100){
		cout<<i<<"\n";
		i++;
	}
	//KIem tra so chia hét 2
	do{
		if(i%2==0) cout<<i<<"\n";
		i++;
	}while(i<100);

	//NHap vao 1 so duong
	do{
		cin>>i;
	}while(i<0);
	// Kiem tra pass
	int tid,tpass;
	do{
		cout<<"ID:";
		cin>>tid;
		cout<<"Pass:"; cin>>tpass;
		cout<<"Again\n";
	}while(tid!=ID && tpass!=password);

	return 0;
}