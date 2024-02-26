#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Enter an integer number: ");
    scanf("%d",&num);
    while(num!=0)
    {
        count=count+1;
        num=num/10;

    }if(count==0)
        {
            count=1;
        }
    printf("%d",count);
    return 0;
}

