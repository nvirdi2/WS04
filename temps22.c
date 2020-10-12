//==============================================
// Name:           Navdeep
// Student Number: 166485193
// Email:          nvirdi2@myseneca.ca
// Section:        NAA
// Workshop:       4 (in-lab)
//==============================================
#include <stdio.h>
#include <stdlib.h>
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
    int Highlocation = 0;   //location of high temp
    int Lowlocation = 0;   //location of low temp
    int chosenday = 0;    //variable of the chosenday to get the avg of
    double sum = 0;      //the sum of the average
    
    for (i = 0; i < days; i++)        //for loop to get the high and low temperature on a day
    {

        if(hightemp[i] > hightemp[Highlocation])  //get the high temperature on a day
        Highlocation = i;

        if(lowtemp[i] < lowtemp[Lowlocation])   //get the low temperature on a day 
        Lowlocation = i;
    }
    printf("The highest temperature was %d, on day %d \n",hightemp[Highlocation], Highlocation + 1);  //display the high temperature on a day
    printf("The lowest temperature was %d, on day %d \n",lowtemp[Lowlocation], Lowlocation + 1);    //display the low temperature on a day

    do {

        printf("Enter a number between 1 and %d to see the average temperature "
                "for the entered number of days, enter a negative number to exit: ", days);        //asked for the day number and if you give a negative number then it exits the program
        scanf("%d", &chosenday);   //scanner for the chosen day
        printf("\n");

        while ((chosenday > days) || (chosenday == 0))   // while these two condition are happen 
        {
            printf("Invalid entry, please enter a number between 1 and %d, inclusive: ", days);    //if the number is not negative and also not valid then this statment asks for a new number 
            scanf("%d", &chosenday);     //scanner for the chosen day
            printf("\n");
        }

    //calculations for the sum and average 
        if (chosenday > 0) {
            for (i = 0; i <= chosenday - 1; i++)
            {
                sum = sum + hightemp[i] + lowtemp[i];
            }
            double mean = (sum / (chosenday * 2));
            printf("The average temperature up to day %d is: %.2f", chosenday, mean);
            printf("\n\n");
        sum = 0;
        }

      } while (chosenday >= 0);

    printf("Goodbye!\n");
    
return 0;
}
