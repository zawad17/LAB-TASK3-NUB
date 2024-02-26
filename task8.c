#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for (int i=7; i<=n; i=i+7)
    {
        sum=sum+i;
    }
    printf("%d",sum);

    return 0;
}
