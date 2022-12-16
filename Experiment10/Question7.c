/*					***Question 7***
 Write a program to input a string. Sort the strin gin alphabetical order and display it.
 */
#include <stdio.h>
#include <string.h>
int main(){
	char inputString[30];
	printf("Enter the string: ");
	scanf("%[^\n]s",inputString);
	int length = strlen(inputString);
	//Bubble sort Ascending
	for (int i = 0; i < length; i++){
		for (int j = 0; j < length - i - 1; j++){
			if ( inputString[j + 1] < inputString[j]){
				char temp = inputString[j];
				inputString[j] = inputString[i];
				inputString[i] = temp;
			}
		}
	}
	printf("%s\n",inputString);
	return 0;
}
/*   o/p
Enter the string: gietu
teigu
*/



