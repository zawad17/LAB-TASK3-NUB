//Write the Cpp programs, which prints the following sequences of values in loops:
//a) 24, 18, 12, 6, 0, -6
//b) -10, -5, 0, 5, 10, 15, 20
//c) 18, 27, 36, 45, 54, 63
//d) 18, -27, 36, -45, 54, -63
//1B
#include<stdio.h>
int main()
{
    int i;
    for(i=-10; i<21; i=i+5)
    {
        if( i!= 20)
        {
            printf("%d, ",i);
        }
        else
        {
            printf("%d",i);
        }

    }

    return 0;
}
//1D
#include<stdio.h>
int main()
{

    for (int i=18; i<64; i=i+9)
    {

        if(i%2!=0)
        {
            printf("-%d",i);

            if(i==63)
            {
             //   printf(" ");
            }
            else
            {
                printf(",");
            }
        }

        else
        {
            printf("%d,",i);

        }


    }


    return 0;
}
