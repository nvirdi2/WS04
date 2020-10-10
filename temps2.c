//==============================================
// Name:           Navdeep
// Student Number: 166485193
// Email:          nvirdi2@myseneca.ca
// Section:        NAA
// Workshop:       4 (in-lab)
//==============================================
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

// Put your code below:

int main(void)
{
    int days = 0;    //declare variable days 
    printf("---=== IPC Temperature Calculator V2.0 ===---\n");      //output message 1
    printf("Please enter the number of days, between 3 and 10, inclusive: ");    //output question for the user to enter the amount of days 
    scanf("%d", &days);    // scanner for days

    printf("\n");
    while (!(days >= 3 && days <= 10))   //when the user gives a value that are not in between 3 - 10
    {
        printf("Invalid entry, please enter a number between 3 and 10, inclusive: ");   // then the question is re-asked
        scanf("%d", &days);   //scanner for days comes backs 
    }
    
  int hightemp[days];   //variable for high temperature 
  int lowtemp[days];   //variable for low temperature 
  int i = 0;          //variable i for the for loop
  
   printf("\n");   
   
   for (i = 0; i < days; i++)    //for loop using the i variable  
    {
        printf("Day %d - High: ", i+1);   //output using the day and high temperature 
        scanf("%d", &hightemp[i]);       //scanner for the high temperature 
        printf("Day %d - Low: ", i+1);  //output using the day and low temperature 
        scanf("%d", &lowtemp[i]);      //scanner for the low temperature 
    }
    printf("\n");
    printf("Day Hi Low\n");     // output day, high, and low

    for(i = 0; i < days; i++) 
    {
        //parallel array output 
        printf(("%d   %d   %d\n"),
             i+1, hightemp[i], lowtemp[i]); 
    }
return 0;
}
