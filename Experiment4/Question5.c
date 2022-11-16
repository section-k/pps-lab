#include <stdio.h>
void main (){
		int x,y,z; 
		printf("Enter 2 numbers: ");
		scanf("%d%d",&x,&y);
		z = ( x > y)? x:y;
		printf("The largest no. is %d",z);
}
/* o/p
Enter 2 numbers: 4 3
The largest no is 4
*/
