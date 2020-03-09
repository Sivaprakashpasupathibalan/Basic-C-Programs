/******************************************************************************

Author: sivaprakash pasupathibalan
This code finds the number is Positive or Negative value

*******************************************************************************/
#include <stdio.h>
signed int value = 0;
int main()
{   
    printf("%s","Enter the number\r\n");
    scanf("%d",&value);
    if(value < 0)
       printf("%s","The Number is Negative");
    else 
       printf("%s","The Number is Positive");
    return 0;
}
