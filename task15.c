#include<stdio.h>
int main()
{

    int num,count=0;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num==0||num==1)
    {
        count=1;

    }
    for(int i=2; i<=num/2; i=i+1)
    {
        if(num%i==0)
        {
            count=1;
            break;
        }

    }
    if(count==0)
        printf("%d is  prime number",num);
    else
        printf("%d is not prime number",num);



    return 0;
}
