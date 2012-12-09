/* 
    a Place to try some thigns out to help me with the program
*/
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>  // required for atoi ()
#include <ctype.h>  // is lower() and isdigit()
int main(int argc, string argv[1])
{
    int key[25]; // may need to change the size of the key here 

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
    {    printf("%c:  ", argv[1][i]);
    // check the value of what was entered

    // check for lower case
        if ( islower (argv[1][i]) )
        {
        printf("%d\n", argv[1][i] - 97);
        key[i] = argv[1][i] - 97;

        //  print the c value, after applying the key
        printf("  the new value is %d\n", argv[1][i] + key[i]);
        }
        
    // check to see if it's uppercase
        if ( isupper (argv[1][i]) )
        {
        printf("%d\n", argv[1][i] - 65);
        key[i] = argv[1][i] - 65;
        }
    }
        // all the values are stored in k[]        
        // this was basically a sanity check
        printf("\n\n%d\n", key[1]);

    // Do i need to make sure only a letter is entered?

/* END OF CHECKING FOR KEY INPUT VALUES */

    return 0;
}
