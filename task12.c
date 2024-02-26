#include<stdio.h>
#include<math.h>

int main()
{
    int num,temp,count=0,divisor;

    printf("Enter an integer value: ");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
       num=num/10;
        count=count+1;

    }
    while(temp!=0)

    {
        int divisor=pow(10,count-1);
        printf("%d",temp/divisor);
        ///divisor=divisor/10;
        temp=temp%divisor;
        count--;
        if(count>0)
        {
            printf(",");
        }

    }


    return 0;
}
