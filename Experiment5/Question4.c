/* 							***Question 4***
In a software company a project team of 3 members namely Manvi, Shyam and WIlliam.Input their job experience in number of years.
THe team leader must have more experience. Describle who can be team leader.
*/
#include <stdio.h>
int main(){
	int m,s,w;
	printf("\nEnter the job Experience: ");
	scanf("%d%d%d",&m,&s,&w);
	if (m > s && m > w){
		printf("\nManvi is the team leader");
	} else if (s > m && s > w) {
		printf("\n Shyam is the team leader");
	} else {
		printf("\nWilliam is the leader");
	}
	return 0;
}
/* 	o/p
Enter the job experience5 2 1
Manvi is teh team leader
*/
