/******************************************************************************
 Author: Sivaprakash pasupathibalan
 This is the code to find Alphabet or Not
*******************************************************************************/

#include <stdio.h>
void Check_Alpahabet(char *ch);            //void function to check Alphabet or Not
int main()
{   
    char ch;
    ch = getchar();
    Check_Alpahabet(&ch);               //passing character from user console to function
    return 0;
}

void Check_Alpahabet(char *ch)             // Alphabet detection function
{
   if(((*ch >= 0x41) & (*ch <= 0x5A)) | ((*ch >= 0x61) & (*ch <= 0x6A)))
         printf("%s","This character is a Alphabet");
   else
         printf("%s","This character is not a Alphabet");
}
