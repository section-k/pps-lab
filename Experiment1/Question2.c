/*               ***Question statement***
Write a program to input marks of a student for 3 subjects physics , chemistry and mathematics by assuming maximum marks of each subject is 40. 
Find the percentage obtained by the student.
	
*/
#include <stdio.h>
int main() {
	float phy_mark, chem_mark, maths_mark, percent;
	printf ("Enter marks of Physics: " );
	scanf("%f",&phy_mark);
	printf("Enter marks of Chemistry: ");
	scanf("%f",&chem_mark);
	printf("Enter marks of Mathematics: ");
	scanf("%f",&maths_mark);
	percent = (phy_mark + chem_mark + maths_mark)/120;
	percent = percent * 100;
	printf("The percentage obtained by student = %f",percent);
	return 0;
}
/* 
	O/p
Enter marks of Physics: 34
Enter marks of Chemistry: 27
Enter marks of Mathematics: 35
The percentage obtained by student = 80.000000
 */

