/*												***Question 4***

/*Display the perfect cube numbers within 1 to 100 */
#include <stdio.h>
#include <math.h>
int main(){
	for (int i = 1; i < 11; i++){
		printf("%d ",(int) pow(i,3));
	}
	return 0;
}
/*     o/p
1 8 27 64 125 216 343 512 729 1000 
*/ 
