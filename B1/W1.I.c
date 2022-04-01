#include <stdio.h>
#include<math.h>
float a,b,c,d;
int main(){
	scanf("%f%f%f",&a,&b,&c);
    if(a==0)
    {
        if(b==0)
            {
                if(c==0)
                    printf("VO SO NGHIEM");
                else
                    printf("VO NGHIEM");
            }
        else
            printf("%.2f",-c/b);
    }
    else
    {
        d=b*b-4*a*c;
        if (d<0)
            printf("VO NGHIEM");
        else if (d==0)
            printf("%.2f",-b/(2*a));
        else{
            float temp = (-b+sqrt(d))/(2*a);
            float tmp=(-b-sqrt(d))/(2*a);
            if(temp>tmp) printf("%.2f %.2f",temp,tmp);
            else    printf("%.2f %.2f",tmp,temp);
        }
    }   
	return 0;
}