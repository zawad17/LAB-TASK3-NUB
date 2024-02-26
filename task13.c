#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(int n=1; n<=num; n=n+1)
    {

        if(num%n==0)
        {
            printf("%d\n",n);
            count=count+1;
        }
    }
    printf("Total %d divisors.\n",count);


    return 0;


}
