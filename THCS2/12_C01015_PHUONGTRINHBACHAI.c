#include<stdio.h>
#include<math.h>

int main()
{
	double a,b,c,x,x1,x2,delta;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	
	
		if(a==0){
			if(b==0){
				if(c!=0){
					printf("NO");
				}
			}else{
				x=-c/b;
				printf("%.2lf", x);
			}
		}else{
			delta=b*b-4*a*c;
			if(delta<0){
				printf("NO");
			}else{
				if(delta==0){
					x=-b/(2*a);
					printf("%.2lf", x);
				}else{
					x1=((-b+sqrt(delta))/(2*a));
					x2=((-b-sqrt(delta))/(2*a));
					printf("%.2lf %.2lf", x1, x2);
				}
			}
		}
	
	return 0;
}
