#include <stdio.h>
#include <math.h>
int main (){
	float a,b,c;
	printf("Enter b: ");
	scanf("%f",&b);
	printf("Enter c: ");
	scanf("%f",&c);
	a = sqrt(pow(b,2) + pow(c,2));
	printf("a = %f",a);
	return 0;
}
