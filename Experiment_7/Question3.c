/*  										***Question 3***
Write a program to test a number is strong or not . Eg -: 145
*/
#include <stdio.h>
int checkStrong(int n){
	int strong = 0,factorial = 1;
	while (n >0){
		for (int i = 1; i <= n%10; i++){
			factorial *= i;
		}
		strong += factorial;
		factorial = 1;
		n /= 10;
	}
	return strong;
}
int main(){
	int number;
	printf("Enter the number: ");
	scanf("%d",&number);
	if (checkStrong(number) == number){
		printf("It is strong number.");
	} else {
		printf("It is not strong number.");
	}
	return 0;
}	
/*  o/p
Enter the number: 145
It is a strong number
*/
