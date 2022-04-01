#include <stdio.h>
#include<math.h>
double x,n;
// int gt(int n)
// {
//     int gt = 1;
//     for (int i = 2; i <= n; i++)
//     {
//         gt *= i;
//     }
//     return gt;
// }
int main(){
	scanf("%lf%lf",&x,&n);
	double res=0;double gt = 1;
	for (int i = 1; i <= n; ++i)
	{
		
		gt *= i;
		res+=pow(x,i)/gt;
	}
	printf("%.2lf",res);
	return 0;
}