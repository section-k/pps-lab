/* Write a program to calculate the following sum using nested for statement:
sum = 1 - (x^2)/2! + (x^4)/4! - (x^6)/6! + (x^8)/8!...(x^n)/n!
*/
#include <math.h>
#include <stdio.h>
int main(){
   int n, x, fact = 1, sign = 1, j = 1;
   float sum = 0.0f, term = 0.0f;
   printf("Enter the value of n: ");
   scanf("%d",&n);
   printf("Enter the value of x: ");
   scanf("%d",&x);
   for (int i = 0; i <= n; i = i + 2){
		   do{
				   fact = fact * j;
				   j++;
		   }while(j <= i);
		   term = sign * (pow(x,i)/fact);
		   sum = sum + term;
		   term = 1;
		   sign *= -1;
   }
   printf("Sum = %f", sum);
}
/*	o/p
Sum = 0.5402
*/
