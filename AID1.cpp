#include<bits/stdc++.h>

using namespace std;

#define scan scanf
#define print printf
#define file freopen

int n, m, k;
int force1, force2;
int G[16000][16000];

void addVal(int &x, int &y, int &z) {
	G[x][y] = z;
	G[y][x] = z;
}

void input() {
	file("AID.inp", "r", stdin);
	int u, v, w;
	scan("%d %d %d", &n, &m, &k);
	for(int i=1; i<=m; ++i) {
		scan("%d %d %d", &u, &v, &w);
		if(i == k) {
			force1 = u;
			force2 = v;
		}
		addVal(u, v, w);
	}
}

void addEdg(int &x, int (&addE)[16000], int (&node)[16000], int &Cou, bool (&chk)[16000]) {
	for(int i=1; i<=n; ++i) 
		if(G[x][i] > 0 && chk[i] != true) {
			++Cou;
			addE[Cou] = G[x][i];
			node[Cou] = i;
		}
}
void prim(int &x, int &y) {
	int add[16000], nod[16000], U=0;
	int Cou = 2;
	int from = 0;
	int mnCost = 0;
	bool chkAdd[16000];
	chkAdd[x] = true;
	chkAdd[y] = true;
	addEdg(x, add, nod, U, chkAdd);
	addEdg(y, add, nod, U, chkAdd);
	while(Cou < n) {
		if(from != 0) addEdg(from, add, nod, U, chkAdd);
		int mn = INT_MAX;
		for(int i=1; i<=U; ++i) 
			if(add[i] < mn && chkAdd[nod[i]] != true) {
				mn = add[i];
				from = nod[i];
			}
		++Cou;
		chkAdd[from] = true;
		mnCost += mn;
	}
	print("%d", mnCost + G[x][y]);
}

int main() {
	input();
	prim(force1, force2);
}
