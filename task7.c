#include<stdio.h>
int main(  )
{
    int num,sum=0,count=0 ;
    double n;

    for(int i =1; i<=10; i++)
    {
        scanf("%d",&num);
        if (num%2!=0)
        {
            sum=sum+num;
            count=count+1;
            n=(double)sum/count;
        }
    }
    printf("The total of the odd numbers is %d and their average is %.1lf\n",sum,n);


    return 0;
}


