#include<stdio.h>
int main()
{
    int num,sum=0;

    for (int i =1; i<=5; i++)
    {
        scanf("%d",&num);
        sum=sum+num;
        printf("%d\n",sum);

    }

    return 0;
}

