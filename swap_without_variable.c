/******************************************************************************
Author: Sivaprakash pasupathibalan
This Code will swap two numbers without third variable

*******************************************************************************/

#include <stdio.h>
unsigned int var1 = 0 , var2 = 0;
int main()
{
    printf("%s","Enter the first swap number var1\r\n");
    scanf("%d",&var1);
    printf("%s","Enter the first swap number var2\r\n");
    scanf("%d",&var2);
    var1 = var1 + var2;   //50 = 20 + 30
    var2 = var1 - var2;  //20 = 50 - 30 
    var1 = var1 - var2;  //30 = 50 - 20
    printf("The value of var1 is %d and var2 is %d\r\n",var1,var2);
    
    return 0;
}
