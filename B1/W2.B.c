#include <stdio.h>
 
int main(){
    int n;
    scanf("%d", &n);
    int dem;
    for(int i = 2; i <= n; i++){
        dem = 0;
        while(n % i == 0){
            ++dem;
            n /= i;
        }
        if(dem){
            if(dem >=1 ) printf("%d^%d", i, dem);
            else printf("%d", i);
            if(n > i){
                printf(" x ");
            }
        }
    }
    
}