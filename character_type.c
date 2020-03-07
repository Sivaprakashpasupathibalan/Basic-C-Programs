/******************************************************************************
 Author: Sivaprakash pasupathibalan
 This is the code to print the type of the character
*******************************************************************************/

#include <stdio.h>
void char_identifier(char *ch);            //void function to print the type of character
int main()
{   
    char ch;
    ch = getchar();
    char_identifier(&ch);               //passing character from user console to function
    return 0;
}

void char_identifier(char *ch)             // function to print type of character
{
  if(((*ch >= 0x41) & (*ch <= 0x5A)))                         // Checks the character with ASCII Table A - Z
       printf("%s","The character is the Alphabet Upper case");
  else if(((*ch >= 0x61) & (*ch <= 0x6A)))                    // Checks the character with ASCII Table a - z
       printf("%s","The character is the Alphabet Lower case");
  else if(((*ch >= 0x30) & (*ch <= 0x39)))                    // Checks the character with ASCII Table 1 - 9
       printf("%s","The character is the Digit");
  else
       printf("%s","The character is the special character"); // other characters as special characters
  
}
