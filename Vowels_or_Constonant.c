/******************************************************************************
 Author: Sivaprakash pasupathibalan
 This is the code to find Alphabet is a Vowel or constonant
*******************************************************************************/

#include <stdio.h>
void Check_const_vowel(char *ch);            //void function to print passed char is vowel or constonant
int stat = 1;
char vowel[10] = {'a','e','i','o','u','A','E','I','O','U'};   //Character array for vowels in lower and upper case
int main()
{   
    char ch;
    ch = getchar();
    Check_const_vowel(&ch);               //passing character from user console to function
    return 0;
}

void Check_const_vowel(char *ch)             // vowel or constonant detection function
{
  for(int i = 0; i <= sizeof(vowel) ; i++)           
  {   
      stat = 0;
      if(*ch == vowel[i])                              //checking char with vowel array
      {
      printf("%s","The Character is a Vowel\r\n");
      stat = 1;
      break;
      }
  }
  if(stat == 0)
      printf("%s","The Character is a constonant\r\n");
}


