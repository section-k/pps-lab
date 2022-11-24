/* 															***Question 7***
Display all the prime numbers exist between  1 to 1000 
*/
#include <math.h>
#include <stdio.h>
int main(){	
    int flag = 0;
	for (int i = 1; i <= 1000; i++){
			for (int j = 2; j <= sqrt(i); j++){
						if (i % j == 0){
								flag = 1;
						}
		     }
			if (flag == 0){
					printf("%d",i);
				    printf("\n");
		    }
			
			flag = 0;
    }
	return 0;
}

