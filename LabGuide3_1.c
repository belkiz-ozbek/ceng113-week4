#include <stdio.h>
#include<math.h>

int main(void){
	
	int a=2;
	
	double b = floor(pow(M_E,a));
	
	printf("\n a: %d",a);
	printf("\n b: %f",b);
	
	
	double c;
	
	c=pow(a*b,3.0/5) + 3*10;
	
	printf("\n c: %f",c);
	
	double d;
	
	d=(pow(a*b,3.0/5)+3)*10;
	
	printf("\n d: %f", d);
	
	bool e=b>a && c>=a || d==b;
	printf("\n e: %d",e);
	
	
	bool f=(b>a && c>=a || d)==b;
	printf("\n f: %d",f);
	

}
