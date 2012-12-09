/*
 * Here is my first try at Viginere.
 * Initially starting with the code from caesar.c
*
*/

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>  // required for the atoi()
#include <ctype.h>  // for islower() and isdigit()

 int main(int argc, string argv[])
{ 
    
    // verify they only enter one value for argc
    if ( argc != 2 )
    {
        printf("please enter only one key value.\n");
        printf("Usage:  /home/cs50/pset2/caesar <key>\n\n ");
        return 1;
    }
    
    else
    {
        // variable declarations to use outside brackets
        int fred;
        int c;

        // take the caesar key that is inputted, store it in a variable and convert to int
        int k = atoi(argv[1]);   
        
        // lowercase alphabet
       string lower[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
        string upper[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};
     
     // Get user input, look at string1.c for an example from lecture 2w
        string input = GetString();
        
        // ensure the user entered something, I'll probably want to use a do-while loop in the final program
        if (input != NULL)
        {

            // print string, one character at a time
            for (int i = 0, len = strlen(input); i < len; i++)  // I should store this as a variable here
            {
                char p = input[i];
             
                // check for lower case or upper case, if it is not a letter, don't do anything
                if (islower(p))
                {
                fred = (int) p - 97;
                c = (fred + k) % 26;
               
                  printf("%s", lower[c]);
                }
               
                if (isupper(p))
                {
                fred = (int) p - 65;
                c = (fred + k) % 26;
                printf("%s",upper[c]);
                }
                
                // if the character is a space
                if (isspace (p) )
                    printf(" ");
                if (ispunct (p) )
                    printf("%c", p);
            }
            printf("\n");
        }
    }  

  return 0;
}
