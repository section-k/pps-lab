/*								***Question 2***
Generate the shape:
1 3 5 7 9
1 3 5 7
1 3 5
1 3
1
*/
#include <stdio.h>
int main(){
		for (int i = 5;i >= 1; i--){
				for (int j = 1; j <= i; j++){
						printf("%d ",2*j-1);
				}
				printf("\n");
		}
}
/* o/p
  1 3 5 7 9
  1 3 5 7
  1 3 5
  1 3
  1
*/
