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
  //  int n = 0;  // so I can use in the array below
  //  int cvalue[n];  // so I can use outside the loop
    

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
       //  int cvalue[n];
       
       // determine how far away from a it is, to shift the user input
        printf("%d\n", argv[1][i] - 97);
        key[i] = argv[1][i] - 97;

        //  print the c value, after applying the key
        // store it in a variable, actually an array
       //  cvalue[i] = argv[1][i] + key[i];
       //  printf("the cvalue of c[2] is %c\n", cvalue[2]); // i'm assuming this was a test, k should be applied to input

        // printf("  the new value is %d\n", cvalue);
        }
        
    // check to see if it's uppercase, come back to this part later
        if ( isupper (argv[1][i]) )
        {
        printf("%d\n", argv[1][i] - 65);
        key[i] = argv[1][i] - 65;
        }
    }

/* END OF CHECKING FOR KEY VALUES */

    // get user input
    string input = GetString();

    if (input != NULL)
    {
 /*       // print one character at a time
        for (int i = 0, inlen = strlen(input); i < inlen; i++)
        {
            char p = input[i];
            
            // make it a cipher variable
            int cipher =( p + key[i % n ]) % 26 ;
            printf("the new value is:  %d\n", cipher);

            // print the new letters, c (cipher)
            printf("the new value is:   %c\n", (p + (key[i % 3] )));  // so I think here 3 I was just using as an example
        }
   */     
        // new code
        
        // initialize the array so I can use it outside the for loop
        int lower[26];

        // create lowercase alphabet and store in an array
        for (int i = 0; i <26; i++)
            lower[i] = 97 + i;
        
       
        // replace these with dynamic variables
        // to do this I might just want to move it up above

        int alpha_num = ('y' - 97); 
        int end = (alpha_num + 5) % 25;

        printf("the present value is %d\n", alpha_num);
        printf("\n the new value is %d:  %c\n", end, lower[end]);
        
        // end of new code
    }


    return 0;
}
