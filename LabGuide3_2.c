#include <stdio.h>
#include<math.h>

int main(void){
	
	
	int a=5, b=5, c=10;
	
	printf("(a == b) && (c > b) is %d", (a == b) && (c > b));
	
	printf("\n(a == b) && (c < b) is %d",(a == b) && (c < b));
	printf("\n(a == b) || (c < b) is %d",(a == b) || (c < b));
	printf("\n(a != b) || (c < b) is %d",(a != b) || (c < b));
 	printf("\n!(a != b) is %d ",!(a != b));
 	printf("\n!(a == b) is %d",!(a == b));
 	
 	
 	


}
