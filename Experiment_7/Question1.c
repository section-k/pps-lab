#include <stdio.h>
#include <math.h>
int checkprime(int n){
	int i = 2;
	do{
		if (n % i == 0){
			return 0;
		}
		i++;
	}while(i <= sqrt(n));	
	return 1;
}
int main(){
	int number;
	printf("Enter the number: ");
	scanf("%d",&number);
	if (checkprime(number)){
			printf("prime");
	} else {
		printf("Not prime");
	}
	return 0;
}

