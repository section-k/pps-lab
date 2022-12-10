/*						*** Question 6 ***
Write a program to input a string and check whether it is palindrome or not
*/
#include <stdio.h>
int main(){
	char string[40], palin_string[40], end;
	for (int i =0; i < 40; i++){
		scanf("%[^\n]s",string+i);
		//This is xor operator.Search 'scanset' in google to learn more.
	}
	printf("%s",string);
	for (int i = 39; i >= 0; i--){
		if ( string[i] = '\0'){
			end = i;
		}
	}
	for (int i = end-1; i >= 0; i--){
		palin_string[i] = string[i];
		/* printf("\npalindrome = %s\n",palin_string); */
	}
	/*debug*/
	printf("\npalindrome = %s\n",palin_string);
	if ( palin_string == string){
		printf("Palindrome");
	} else {
		printf("Not palindrome");
	}
	return 0;
}
