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
    //int n = 0;  // so I can use in the array below
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
       //  int cvalue[n];    may use this in the future
       
       // determine how far away from a it is, to shift the user input
        printf("%d\n", argv[1][i] - 97);
        key[i] = argv[1][i] - 97;

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
        
        // create lowercase alphabet and store in an array
         int lower[26];  // initialize the array so I can use it outside the for loop
         for (int i = 0; i <26; i++)
            lower[i] = 97 + i;
       
       //: int input_len = strlen(input);
        
        // NEW CODE

        // print out each character entered for input

        int j = 0;
        for (int i = 0, inlen = strlen(input); i < inlen; i++)
        {
        printf("%c\n", input[i]);

            // now apply the key

            // relative value in the alphabet
            int alpha_num =  (input[i] - 97);   // this might be where the problem is
            printf("the alpha value is %d\n", alpha_num);
            

            // int j =  0;
            if ( j < strlen(argv[1]) ) {
                
                // try adding the key to the input char
                int z = (input[i] + key[j]);

               //  printf("the new value is:  %d\n", (input[i] + key[j]));
               printf("the new value is:  %d\n", z);
            //   printf("using the array it is:  %d\n", lower[z]);  // i know what I want to do here, but I can't get it to work
                int zero = 0;
               printf("\n\nthe first value in the array is:  %c\n",  lower[zero]);
              
                printf("\nthe k value is:  %d\n", key[j]);  
              
              printf("\n\n dynamically this is %d\n", alpha_num + key[j] );


                // need to get the relative value in the alphabet
               // lower case a = 0, b =1, etc.
               //  lower[0]
/*
               printf("\nthe new value is %d\n", ( (lower [i] - 97) + key[j] % 26));
               printf("\n the alpha value is %c\n",( (lower [i] - 97) + key[j] % 26));
               printf("\n\n with the array %d\n", ( (lower [i] - 97) + key[j] % 26));

                // alpha value is not printing, it needs to be the value in the array
                // lower [1] for example
 
*/                
                j++; 
            }

            if (j >= strlen(argv[1])) {   // should this be an else if
                // debugging   printf("reset j to zero\n");
                j = 0;
            }
        }

        printf("the 1st value of the key is: %d\n", key[0]);
//        printf("the 1st value of the key is: %c\n", key[0]);
      //  key[i] = argv[1][i] - 65;

       
        // replace these with dynamic variables
        // to do this I might just want to move it up above

      //  int alpha_num = ('y' - 97); 
      //  int end = (alpha_num + 5) % 25;

     //   printf("the present value is %d\n", alpha_num);
     //   printf("\n the new value is %d:  %c\n", end, lower[end]);
        
    }
    return 0;

}
