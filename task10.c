#include<stdio.h>
int main()
{
    int num,reminder;
    printf("Enter an Integer number: ");
    scanf("%d",&num);
    while(num!=0)
    {
        reminder=num%10;
        printf("%d",reminder);
        num=num/10;
        if(num>0)
        {
            printf(",");
        }
        else
        {
            printf(" ");
        }
    }
    printf("\n");




    return 0;
}
