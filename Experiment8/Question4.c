/*										***Question 4***
Write a program to test a number is perfect or not using for statement.(ex: The number is 6, which is sum of 1,2 and 3. other perfect numbers are 28, 496 and 8,128.)
A number is perfect number where the number is equal to sum of it's factors except the number itself.
*/
#include <stdio.h>
int main(){
	int n, sum = 0;
	printf("Enter a number: ");
	scanf("%d",&n);
	//code of logic of program 
	for (int i = n-1; i > 0; i--){
		if ( n % i == 0){
			sum += i;
		}
	}
	if (sum == n){
		printf("It is a perfect number\n");
	} else {
		printf("It is not a perfect number\n ");
	}
	return 0;
}
/* o/p
Enter a number: 28
It is a perfect number
*/
