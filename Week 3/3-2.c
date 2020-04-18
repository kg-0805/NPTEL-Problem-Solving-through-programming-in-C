#include <stdio.h>
int main()
{
    double number;
    scanf("%lf", &number); 
    /* The number is entered automatically from the test cases and executed */
    /* Write the rest of the code in the box below
    As the output should exactly match with the output mentioned in the test cases
    so copy and paste the following printf statements wherever and whichever is applicable
      printf("The number is 0.");
      printf("Negative number.");
      printf("Positive number.");  
    Do not use any other scanf statements */

    if (number <= 0.0)
    {
        if (number == 0.0)
            printf("The number is 0.");
        else
            printf("Negative number.");
    }
    else
        printf("Positive number.");
}
