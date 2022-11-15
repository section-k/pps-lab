#include <stdio.h>
int main(){
	int distance, velocity1, velocity2;
	printf("Enter the distance: ");
	scanf("%d",&distance);
	printf("Enter the  trip velocity:");
	scanf("%d",&velocity1);
	printf("Enter the return velocity ");
	scanf("%d",&velocity2);
	int average_speed = distance/(((5*velocity1)/18)+((5*velocity2)/18));
	printf("The average speed= %d",average_speed);
	return 0;
}
