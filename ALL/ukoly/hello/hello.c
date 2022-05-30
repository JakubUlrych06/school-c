#include <stdio.h>
#include <stdlib.h>

 void hello(int n)   
{
    for(int i = 0; i < abs(n); i++)
    {
        printf("hello\n");
    }
}

int main()
{
    hello(1000000);
    return 0;
}