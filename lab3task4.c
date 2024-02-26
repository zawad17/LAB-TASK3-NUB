//Write a Cpp code of a program that adds all numbers that are multiples of either 7 or 9 but not
//both, up to 600 (including 600) i.e. 7, 9, 14, 18, 21..... and so on but not the numbers 63, 126,
//189..... which are multiples of both 7 and 9.
//The output of your program should be: 39814

#include<stdio.h>
int main(  )
{
    int sum=0;

    for(int i =0; i<=600; ++i)
    {

        if((i%7==0 || i%9==0)&& i%63!=0)

            sum=sum+i;
    }
    printf("%d\n",sum);




    return 0;
}
