/*							***Question 6***
Write a program to input 3 co-efficient values and find the real roots of Quadratic Equation.
*/
#include <stdio.h>
#include <math.h>
int main(){
		int a,b,c;
		float root1,root2;
		printf("Enter teh values of a,b,c: ");
		scanf("%d%d%d",&a,&b,&c);
		root1 = (-b +sqrt( b*b - 4*a*c))/(2*a);
		root2 = (-b -(sqrt(b*b - 4*a*c))/(2* a);
		return 0;
}
//Incomplete
