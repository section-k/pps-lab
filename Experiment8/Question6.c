/*							 ***Question6.c*** 
 A trader has three bundles of string 392m, 308m and 490m long. What is the greatest length of string that the bundles can be cut up into without any left-over string?
*/ 
#include <stdio.h>
#include <math.h>
//To check whether the number is prime or not
int test_prime(int n){
	for (int i = 2; i <= sqrt(n);i++){
		if (n % i == 0){
			return 0;//prime nahi hai
		}	
	}
	return 1;//prime hai
}

int min2(int n1,int n2,int n3){
	int min;
	min = (n1 < n2 && n1 < n3)?n1:(n2 < n3 && n2 < n1)? n2 : n3;
	return min;
}
void hcf(int n1, int n2,int n3){
	int i = 2, hcf_ = 1;
	int min = min2(n1,n2,n3);
	while ( i <= min){
		if (n1 %i == 0 && n2 % i == 0 && n3 % i == 0 && test_prime(i) == 1){
			hcf_ *= i;
			n1 = n1/i;
			n2 = n2/i;
			n3 = n3/i;
		//	i = 2;
		} else {
			i++;
		}	
	}
	printf("The maximum length of each piece = %d",hcf_);
}	
int main(){
	int n1,n2,n3;
	printf("Enter Length of string 1 string 2 string 3: ");
	scanf("%d%d%d",&n1,&n2,&n3);
	hcf(n1,n2,n3);
	return 0;
}
