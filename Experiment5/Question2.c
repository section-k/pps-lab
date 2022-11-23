/*								***Quesstion 2***
Write a program to input a number into variable x and find x*4 using operator <<
*/
#include <stdio.h>
int main(){
		int x;
		printf("\nEnter a no. : ");
		scanf("%d",&x);
		x = x<<2;
		printf("%d",x);
		return 0;
}
/*   o/p
Enter a no. : 4
16
*/
