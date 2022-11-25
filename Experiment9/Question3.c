/*							***Question 3***
Write a program to generate the following pyramid using nested for statement:
				1
		    1   2   1
		1   2   3   2   1
     1  2   3   4   3   2   1
*/
#include <stdio.h>
int main(){
		for (int i = 1; i <= 4; i++){
				for (int l = 4; l >= i; l--){//For printing space
						printf("  ");
				}
				for (int j = 1; j <= i; j++){//For printing left symmetry
						printf("%d ",j);
				}
				for (int k = (i-1); k > 0; k--){//For printing right symmetry
						printf("%d ",k);
				}
				printf("\n");
		}
		return 0;
}
