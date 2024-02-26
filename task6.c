#include<stdio.h>
int main(  )
{

    int n,y ;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            y-=(i*i);
        }
        else
        {
            y+=(i*i);
        }
    }printf("%d",y);

    return 0;
}


