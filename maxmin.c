#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
//SNT
int snt(int b){
	int q;
	if(b<2) return 1;
	tmp=0;
	for( q=2;q<=sqrt(b);q++){
		if(b%q==0) tmp++; 
	}
	if(tmp==0) return 0;
	else return 1;
	return 0;
}