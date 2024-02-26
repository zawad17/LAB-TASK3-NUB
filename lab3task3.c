//Write the Cpp code of a program that adds all numbers that are multiples of both 7 and 9 up to
//600 (including 600) i.e. 63, 126, 189, 252, ....
//The output of your program should be: 2835
//since 63 + 126 + 189 + 252 + 315 + 378 + 441 + 504 + 567 = 2835

#include<stdio.h>
int main(  )
{
    int sum=0;
    for(int i =0; i<=600; i+=63)
    {
        if(i/7 && i/9)
        {
            sum=sum+i;

        }
    }
    printf("%d\n",sum);




    return 0;
}
