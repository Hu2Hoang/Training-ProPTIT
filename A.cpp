#include<stdio.h>
#include<math.h>
long long n, l, r;
long long a;
long long res;

int main() {
	scanf("%lld%lld%lld", &n,&l,&r);
	res = r - l + 1;
	bool chk1[r+1];
	bool chk2[r+1];
	for(int i=1; i<=n; ++i) {
		scanf("%lld", &a); 
		int c = l / a;
		int e = l % a;
		if(e == 0 && chk1[l] == true && chk2[l] != true) {
			--res;
			chk2[l] = true;
		}
		if(e == 0 ) {
			chk1[l] = true;
		}
		while(c*a <= r) {
			if(chk1[c*a] == true && chk2[c*a] != true) {
				--res;	
				chk2[c*a] = true;
			}
			chk1[c*a] = true;
			++c;
		}
	}
	printf("%lld", res);
}