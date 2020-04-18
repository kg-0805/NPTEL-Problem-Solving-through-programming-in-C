#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number); /*An integer number is taken from the test case */

/* Write the rest of the program in the box provided below. As the output
should exactly match with the output provided in the test cases so use exactly the 
following printf statement wherever and whichever is applicable. 

printf("%d is even.", number);
printf("%d is odd.", number);

*/

   if(number % 2 == 0)
        printf("%d is even.", number);
    else
        printf("%d is odd.", number);
}
