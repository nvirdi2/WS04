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
    int days = 0;
    printf("---=== IPC Temperature Calculator V2.0 ===---\n");
    printf("Please enter the number of days, between 3 and 10, inclusive: ");
    scanf("%d", &days);

    while (!(days >= 3 && days <= 10))
    {
        printf("Invalid entry, please enter a number between 3 and 10, inclusive: ");
        scanf("%d", &days);
    }
    
  int hightemp[days];
  int lowtemp[days];
  int i = 0;
  
   printf("\n");
   
   for (i = 0; i < days; i++)
    {
        printf("Day %d - High: ", i+1);
        scanf("%d", &hightemp[i]);
        printf("Day %d - Low: ", i+1);
        scanf("%d", &lowtemp[i]);
    }
    printf("\n");
    printf("Day Hi Low\n");

    for(i = 0; i < days; i++)
    {
        printf(("%d   %d   %d\n"),
             i+1, hightemp[i], lowtemp[i]); 
    }
return 0;
}