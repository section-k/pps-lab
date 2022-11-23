/*								***Question 3***
In your garden two flower plants of rose and lily are growing. Input the growth of each plant is centimeter.
Display the plant whose height is more.
 */
#include <stdio.h>
int main(){
	int r,l;
	printf("\nheight of R and L: ");
	scanf("%d%d",&r,&l);
	if (r > l){
		printf("\nRose has more height");
	} else {
		printf("\nLily has more height");
	}
	return 0;
}
/* 	o/p
height of R and L: 11 13
lily has more height
*/
