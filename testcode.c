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
    int key[]; // do I need to know the size here? yes I do

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
    printf("%d\n", argv[1][i] - 97);
    key[i] = argv[1][i] - 97;
    }
                


    return 0;
}
