/*						***Question 1***
John, Ram, and shah were fishing in a river bank. Input the no. of fishes caught by each person and display who have caught
more fishes(Use conditional operators)
*/
#include <stdio.h>
void main(){
		int j,r,s,more;
		printf("Enter the no.of fishes caught by John, Ram, Shah:");
		scanf("%d%d%d",&j,&r,&s);
		more = (j >r && j>s)?j:(r>j && r>s)?r:s;
		printf("The largest no. is %d",more);
}
/* o/p
Enter the no. of fishes caught by John, Ram, Shah:20 40 15
The largest no. is 40
*/
