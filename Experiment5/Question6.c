/*Write a program input a digit within 0 to o6. Display week day   
example: 0 for Sunday, 1 for Monday etc (use else if ladder).
*/
#include <stdio.h>
int main(){
    int d;
    printf("Enter a number (1-7): ");
	scanf("%d",&d);
	if (d == 1){
		printf("Monday");
    } else if (d == 2) {
		printf("Tuesday");
	} else if (d == 3) {
		printf("Wednesday");
	} else if (d == 4) {
		printf("Thursday");
    } else if (d == 5) {
		printf("Friday");
    } else if (d == 6) {
		printf("Saturday");
    } else if (d == 7) {
		printf("Sunday");
    }
	return 0;
}
/* o/p
Enter a number (1-7): 4
Thursday
*/
