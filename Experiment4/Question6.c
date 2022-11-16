/*						***Question 6***
WAP to input 3 unequal intefger and find the largest number using conditional operators
*/
#include <stdio.h>
void main (){
	int x,y,z,big;
    printf("Enter 3 numbers: ");
	scanf("%d%d%d",&x,&y,&z);
	big = (x>y && x>z)? x : (y>x && y>z)?y:z;
	printf("The largest no:%d",big);
}
/* o/p
 Enter 3 numbers : 10 20 30
 The largest no. : 30
 */
