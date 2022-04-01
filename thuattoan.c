#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))

int max(int a,int b){
	if(a>b) return a;
	else return b;
}

#include <bits/stdc++.h>
#define fio(i,a1,b1) for(i=a1;i<b1;i++)
using namespace std;

//Quicksort
void swap(int &a,int &b){
	int tmp;
	tmp=a;
	a=b;
	b=tmp;
}
void quicksort(int a[], int left, int right){
	int l=left,r=right;
	int key=a[(l+r)/2];

	while(l<=r){
		while(a[l]<key) l++;
		while(a[r]>key) r--;
		if(l<=r){
			swap(a[l],a[r]);
			l++;r--;
		}
	}
	if(left<r) quicksort(a,left,r);
	if(l<right) quicksort(a,l,right);
}

//Sort
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
qsort(arr,n+1,sizeof(int),cmpfunc);
//SNT
int snt(int b){
	int q;
	if(b<2) return 1;
	int tmp=0;
	for( q=2;q<=sqrt(b);q++){
		if(b%q==0){
			tmp++; 
			break;
		}
	}
	if(tmp==0) return 0;
	else return 1;
	return 0;
}
//Nam nhuan
int leapY(int y){
	if(y%4==0)
		if(y%100==0)
			if(y%400==0)
				return 0;
			else return 1;
		else return 0;
	else 1;
}
//So Chinh Phuong
int scp(int p){
	if(sqrt(p)==(int)sqrt(p)) return 0;
	else return 1;
}
//So hoan hao
int shh(int h){
	for(int i=1;i<=h-1;i++){
		if(h%i==0) res+=i;
	}
	if(res==h) return 0;
	else return 1;
}
//Giai thua
int gt(int t)
{
    int gt = 1;
    for (int g = 2; g <= t; g++)
    {
        gt *= g;
    }
    return gt;
}
//số lượng chữ số của một số nguyên duong
#include <stdio.h>
#include <string.h>
char n[1005];
int main(){
	scanf("%s",n);
	if(n[0]=='-') printf("%d",strlen(n)-1);
	else printf("%d",strlen(n));
	return 0;
}
//To hop chap k cua n
	//n=5,k=2 res =10;
int ckn(int n,int k){
	int th=1;
	for(int i=1;i<=k;i++){
		th=th*n/i;
		n--;
	}
	return th;
}
//(Optimal)Tinh tong cac chu so
//Cong don xau
char a[11];
	sum = 0;
	int t = strlen(a) -1;
	for(int j=0;j<=t;++j) sum += a[j]-48;
//Chu so cuoi cung cua 2^n
int l2n(int n){
	if(n==0) return 1;
	switch(n%4){
		case 0: return 6 ;break;
		case 1: return 2;break;
		case 2: return 4;break;
		case 3: return 8;break;
	}
}
//Tinh dien tich tam giac
float stamgiac(float xa, float ya, float xb, float yb, float xc, float yc)
{
    return 0.5*fabs(xa*yb-xb*ya+xb*yc-xc*yb+xc*ya-xa*yc);
}
//Them phan tu vao mang
	//Tim vi tri them
int timVT(int arr[100005],int n,int x){
	if(x>arr[n]) return n+1;
	for(int i=1;i<=n;i++){
		if(arr[i]>=x){
			return i;
			break;
		}
	}
}
	//Chen pt vao mang
void chen(int arr[10005],int n,int x,int k){
	for(int i=n+1;i>k;i--){
		a[i]=a[i-1];
	}
	a[k]=x;
}
chen(a,n,x,k=timVT(a,n,k));n++;
//Sang nguyen to
int prime[10000005];
void sieve(){
	prime[0]=prime[1]=1;
	for (int i = 0; i <= 1000; ++i)
	{
		if(prime[i]==0){
			for(int j=i*i;j<=1000000;j+=i){
				prime[j]=1;
			}
		}
	}
}
for(int i=1;i<=n;i++){
			if(prime[i]==0) printf("%d ",i);
}