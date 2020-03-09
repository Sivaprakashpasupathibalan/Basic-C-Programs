/******************************************************************************

Author: sivaprakash pasupathibalan
This code finds the number is ODD or EVEN

*******************************************************************************/
#include <stdio.h>
unsigned int value = 0;
int main()
{   
    printf("%s","Enter the number\r\n");
    scanf("%d",&value);
    if((value & 0x01) == 0x00)
       printf("%s","The Number is EVEN");
    else 
       printf("%s","The Number is ODD");
    return 0;
}
