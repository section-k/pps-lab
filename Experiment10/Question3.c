/* Write a program to input integers into a square matrix of size 3X3. Display the transpose of the matrix. */
#include <stdio.h>
int main(){
	int matrix[3][3];
	for (int i = 0; i < 3; i++){
	 	for (int j = 0; j < 3; j++){
	 		scanf("%d",&matrix[i][j]); 
	 	} 
	} 
	//Transposing
	int transpose[3][3];
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			transpose [j][i] = matrix[i][j];
		}
	}
	
	// Printing transpose of matrix
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("%4d",transpose[i][j]);
		}
		printf("\n");
	}

	return 0;
}
/*		o/p
 1 2 3 4 5 6 7 8 9
   1   4   7
   2   5   8
   3   6   9
*/


