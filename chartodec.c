/******************************************************************************
 Author: Sivaprakash pasupathibalan
 This is the code to print value of ASCII value of character
*******************************************************************************/

#include <stdio.h>
void ASCII_Val(char *ch);            //void function to print ASCII values of character
int main()
{   
    char ch;
    ch = getchar();
    ASCII_Val(&ch);               //passing character from user console to function
    return 0;
}

void ASCII_Val(char *ch)             // ASCII val of character print function
{
  printf("%d",*ch);
}
