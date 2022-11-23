/*									***Question5***
Write a program to generate a series of fibonacci numbers using for statement
*/
// Fibonacci series is 0,1,1,2,3,5,8,13...
#include <stdio.h>
int main(){
	int a = 1,b = 0,n;
	int sum = 0;
	printf("Enter the value of n: ");
	scanf("%d",&n);
//	printf("0 ");
	for (int i = 1; i <= n; i++){
		printf("%d ",sum);
		sum = a+b;
		b = a;
		a = sum;
	
	}
	return 0;
}
		
