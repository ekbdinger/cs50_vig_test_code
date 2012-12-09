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
    int key[25]; // do I need to know the size here? yes I do

    // verify they only enter one value for argc
    if ( argc != 2 )
    {
    printf("please enter only one key value.\n");
    printf("Usage:  /home/cs50/pset2/caesar <key>\n\n ");
    return 1;
    }

    // loop each letter in the key
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {    printf("%c\n", argv[1][i]);
    // check the value of what was entered

    // check for lower case
        if ( islower (argv[1][i]) )
        {
        printf("%d\n", argv[1][i] - 97);
        key[i] = argv[1][i] - 97;
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

    /* realizing that I only really need to check whether it's
    upper or lower to get that value and to store it away
    in an array.  

    So, check which the character is and then subtract by 
    97 or 65.  Then store that away
        then we'll use that to shift later on

        then we'll take the size of the array and use it
        as a module % to loop back around
    calling it a night
    */

    return 0;
}
