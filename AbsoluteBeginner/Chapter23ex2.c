// Chapter23ex2.c

#include <stdio.h>

int main(void)
{
    int ctr; //loop counter
    int idSearch; //customer to look for (the key)
    int found = 0; // True is customer is found

    /* define the 10 elements in the arrays */
    int custID[10] = {313,453,502,101,892,
                      475,792,912,343,633
                     };
    float custBal[10] = { 0.00,45.43,71.23,301.56, 9.08,
                          192.41,389.00,229.67,18.31,59.54
                        };
    int tempID, inner, outer, didSwap, i; //for sorting
    float tempBal;

    //first, sort the arrays by customer ids
    for (outer = 0; outer < 9; outer++)
    {
        didSwap = 0; // becomes true if list is not yet ordered
        for (inner = outer; inner < 10; inner++)
        {
            if (custID[inner] < custID[outer])
            {
                tempID = custID[inner]; //must switch both arrays
                tempBal = custBal[inner]; //or they are not linked
                custID[inner] = custID[outer];
                custBal[inner] = custBal[outer];
                custID[outer] = tempID;
                custBal[outer] = tempBal;
                didSwap = 1; //true because a swap took place
            }
        }
        if (didSwap == 0)
        {
            break;
        }
    }

    // interact with the user looking to find balance
    printf("\n\n*** Customer Balance Lookup ***\n");
    printf("What is the customer number? ");
    scanf(" %d", &idSearch);

    //look for the id in the array
    for (ctr=0; ctr < 10; ctr++)
    {
        if (idSearch == custID[ctr]) //do they match
        {
            found = 1; //yes
            break; //exit loop
        }
        if (custID[ctr] > idSearch) // no need to keep searching
        {
            break;
        }
    }

    // once the loop has completed the id was either found or not
    if (found)
    {
        if (custBal[ctr] > 100)
        {
            printf("\n** That customer's balance is $%.2f.\n", custBal[ctr]);
            printf("No additional credit.\n");
        }
        else //balance is less than $100.00
        {
            printf("\n**The customer's credit is good!\n");
        }
    }
    else // the id was not found
    {
        printf("** You have entered an incorrect customer ID.");
        printf("\n ID %3d was not found in the list.\n", idSearch);
    }
    return(0);
}
