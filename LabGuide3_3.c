#include <stdio.h>
#include<math.h>

int main(void){
	
// ax*2+bx+c

int a=1;
double b;
double c;
double x1,x2;
double delta;

double sum, product;

printf("\nEnter the sum of the numbers: ");
scanf("%lf", &sum);



printf("\nEnter the product of the numbers:");
scanf("%lf", &product);
b=-1*sum;
c=product;

delta= b*b-4*a*c;

x1= (-b+sqrt(delta))/(2*a);
x2= (-b-sqrt(delta))/(2*a);

printf("\nThese numbers are: %0.1f and %0.1f",x1,x2);


}
