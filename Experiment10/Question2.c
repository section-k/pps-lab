/* Write to input into a 3x4 matrix. Count separately the number of even and odd nums present in the matrix */
#include <stdio.h>
int main(){
	int matrix[3][4],EvenCounter = 0, OddCounter = 0;
	printf("Enter the matrix: ");
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 4; j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 4; j++){
			if ( (matrix[i][j] & 1) == 0){
				EvenCounter++;
			} else {
				OddCounter++;
			}
		}
	}
	printf("Even counter = %d\nOdd counter = %d",EvenCounter,OddCounter);
	return 0;
}
/*    O/P
 Enter the matrix: 1 2 3 4
1 2 3 4
1 2 3 4
Even counter = 6
Odd counter = 6
*/


