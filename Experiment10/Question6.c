/*						*** Question 6 ***
Write a program to input a string and check whether it is palindrome or not
*/
#include <stdio.h>
#include <string.h>
int main(){
	char string[40], palin_string[40];
	printf("Enter a string: ");
	scanf("%[^\n]s",string);
	//This is xor operator.Search 'scanset' in google to learn more.
	int length = strlen(string);
	for (int i = length; i >= 0; i--){
		palin_string[i] = string[i];
	}
	if ( strcmp(palin_string, string) == 0){
		printf("Palindrome\n");
	} else {
		printf("Not palindrome\n");
	}
	return 0;
}
/* o/p
Enter a string: level
Palindrome
*/
