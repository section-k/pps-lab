/* Write a program to input element into two matrices A[3][3],B[3][3]. Multiply A and B store result into matrix C.
Display  the resultant matrix C
*/
#include <stdio.h>
int main(){
	int a[3][3], b[3][3], c[3][3];
	printf("Enter matrix a: ");
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			scanf("%d", &a[i][j]);
		}
	}
	printf("Enter matrix b: ");
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			scanf("%d", &b[i][j]);
		}
	}
	for (int i = 0; i < 3; i++){
		for (int k = 0; k < 3; k++){
			sum = 0;
			for (int j = 0; j < 3; j++){
				c[i][k] += (a[k][j] * b[j][k]);
			}
		}
		
	}
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("%4d", c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
/*     o/p
 Enter matrix a: 1 2 3
1 2 3
1 2 3
Enter matrix b: 4 5 6
4 5 6
4 5 6
  24  30  36
  24  30  36
  24  30  36
*/
