/* 				***Question 7***
 Input 3 numbers into x, y, z. implement the following and find the result.
 p = x++ + y++ + z;
 q = x-- + --y + z++;
 r = ++p + ++q;
 display p,q,r
 */
#include <stdio.h>
int main(){
	int x,y,z,p,q,r;
	printf("Enter 3 no:");
	scanf("%d%d%d",&x,&y,&z);
	p = x++ + y++ + z;
 	q = x-- + --y + z++;
	r = ++p + ++q;
	printf("p = %d, q = %d, r = %d",p,q,r);
}
/* o/p
Enter 3 no: 1 2 3
p = 7, q = 8 , r =15
*/

