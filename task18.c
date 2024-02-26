#include<stdio.h>
int main()
{
    int M,N;

    printf("Enter M: ");
    scanf("%d",&M);
    printf("Enter N: ");
    scanf("%d",&N);
    for(int i=1; i<=M; i++)
    {
        for(int j=1; j<=N; j++)
        {
            printf("%d",j);

        }
        printf("\n");
    }



    return 0;
}
