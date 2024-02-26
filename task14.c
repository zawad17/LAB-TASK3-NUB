#include<stdio.h>
int main()
{

    int num,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(int n=1; n<=num/2; n=n+1)
    {
        if(num%n==0)
        {
            sum=sum+n;
        }
    }
    if(sum==num)
    {
        printf("%d is a perfect number",num);
    }
    else
    {
        printf("%d is not a perfect number",num);
    }


    return 0;
}
