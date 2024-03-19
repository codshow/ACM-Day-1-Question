/*QUESTION 2:


	Aryan and his friends are very fond of the pattern. For a given integer ‘N’, they want to make the N-Binary Number Triangle.

	You are required to print the pattern as shown in the examples below.

	Example:
	Input: ‘N’ = 3

	Output: 

	1
	0 1
	1 0 1
	Detailed explanation ( Input/output format, Notes, Images )
	Constraints :
	1  <= N <= 20
	Time Limit: 1 sec
	Sample Input 1:
	3
	Sample Output 1:
	1
	0 1
	1 0 1

	Sample Input 2 :
	4
	Sample Output 2 :
	1
	0 1
	1 0 1
	0 1 0 1

	Sample Input 3 :
	6
	Sample Output 3 :
	1 
	0 1 
	1 0 1 
	0 1 0 1 
	1 0 1 0 1 
	0 1 0 1 0 1 
*/
#include <stdio.h>

int main() {
    int n;

    printf("Input ");
    scanf("%d", &n);
    printf("Output %d\n",n);


    for (int i = 0; i < n; i++) {
        int num = 1 - (i % 2);  

        for (int j = 0; j <= i; j++) {
            printf(" %d ", num);
            num = 1 - num; 
        }
        
 
        printf("\n");  
    }
    return 0;
}
