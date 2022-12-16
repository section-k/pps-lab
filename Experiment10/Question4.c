/*				*** Question 4 ***
 Write a program to input integers into a 3x4 matrix. Find the sum of individual rows.
 */
#include <stdio.h>
int main(){
	int matrix[3][4];
	int matrix2[3][4];
	int sum[3] = {0,0,0};
	printf("Enter 1st Matrix(3x4): ");
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 4; j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("Enter 2nd Matrix(3x4): ");
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 4; j++){
			scanf("%d",&(matrix2[i][j]));
		}
	}
	//Sum of rows
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 4; j++){
			sum[i] = sum[i] + matrix[i][j] + matrix2[i][j]; 
		}
	}
	//Printing sum of rows
	for (int i = 0; i < 3; i++){
		printf("Sum of %d row = %d", i, sum[i]);
		printf("\n");
	}
	return 0;
}
/* o/p
Enter 1st Matrix(3x4): 1 2 3 4
5 6 7 8
9 10 11 12
Enter 2nd Matrix(3x4): 1 2 3 4    
5 6 7 8
9 10 11 12
Sum of 0 row = 20
Sum of 1 row = 52
Sum of 2 row = 84
*/
