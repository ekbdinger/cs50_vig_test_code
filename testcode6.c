/*
    New version of this created on Dec. 16, 2012
*/
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>  // required for atoi ()
#include <ctype.h>  // is lower() and isdigit()
int main(int argc, string argv[1])
{

    
    int key[25]; // initialize key for cipher 

    // verify they only enter one value for argc
    if ( argc != 2 )
    {
    printf("please enter only one key value.\n");
    printf("Usage:  /home/cs50/pset2/caesar <key>\n\n ");
    return 1;
    }
    
    // Verify each character in the key entered is a letter 
    for (int i = 0, len = strlen(argv[1]); i < len; i++)
    {

        if ( (isalpha(argv[1][i])) == false )
        {
            printf("only enter alphabetical characters for the key\n\n");
            return 1;
        }
    }

    // loop each letter in the key
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {    
    
        // check for lower case
        if ( islower (argv[1][i]) )
        {
            // how far is it from a, key value
            key[i] = argv[1][i] - 97;
        }
        
        // check for uppercases
        if ( isupper (argv[1][i]) )
        {
            printf("%d\n", argv[1][i] - 65);  // will remove this eventually, debugging purposes
            key[i] = argv[1][i] - 65;
        }
    }

/* END OF CHECKING FOR KEY VALUES */

    // get user input
    string input = GetString();

    if (input != NULL)
    {
        
        // create lowercase alphabet and store in an array
         int lower[26];  // initialize the array so I can use it outside the for loop
         for (int i = 0; i <26; i++)
            lower[i] = 97 + i;
        
         int j = 0;  // keep this outside the for loop otherwise, won't increment

        // print out each character entered for input
        for (int i = 0, inlen = strlen(input); i < inlen; i++)
        {
            // relative value in the alphabet
            int alpha_num =  (input[i] - 97);   

            if ( j < strlen(argv[1]) ) {
                
                // try adding the key to the input char
                int x = alpha_num + key[j];
                printf("%c", lower[x]);
                j++; 
            }

            if (j >= strlen(argv[1])) {   // should this be an else if
                j = 0;
            }
        }

      //  int alpha_num = ('y' - 97); 
      //  int end = (alpha_num + 5) % 25;
        printf("\n\n");
    }
    return 0;

}
