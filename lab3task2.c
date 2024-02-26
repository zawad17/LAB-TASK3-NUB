//Write a Cpp code for the following:
//1) Ask the user to enter the name of his favorite car.
//2) Ask the user to enter a Number
//Display the name of the user’s favorite car, the number of times specified in the second step.
//===============================================================
//Example 1: If the user enters “Toyota” and 2, your program should print the name “Toyota” two
//times.
//Sample Input 1:
//Toyota
//2
//Sample Output 1:
//Toyota
//Toyota

#include<stdio.h>
int main()
{
    int n;
    char car[100];

    printf("Enter the name of car: ");
    scanf(" %s",&car);
    printf("Enter a number: ");
    scanf("%d",&n);


    int i=1;
    while(i<=n)
    {
        printf("%s\n",car);
        i++;
    }


    return 0;
}
