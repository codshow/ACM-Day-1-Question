/* 
Question 1: 

	Sam is making a forest visualizer. An N-dimensional forest is represented by the pattern of size NxN filled with ‘*’.

	An N/2-dimensional forest is represented by the lower triangle of the pattern filled with ‘*’.

	For every value of ‘N’, help sam to print the corresponding N/2-dimensional forest.

	Example:
	Input:  ‘N’ = 3

	Output: 
	* 
	* *
	* * *

	Constraints :
	1  <= N <= 25
	Time Limit: 1 sec

	Sample Input 1:

	3
	Sample Output 1:
	* 
	* *
	* * *
	Explanation Of Sample Input 1 :
	For N = 3, fill all the rows and columns in the lower triangle of 3x3 matrix with ‘*’.

	Sample Input 2 :
	1
	Sample Output 2 :
	* 
*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }


    return 0;
}