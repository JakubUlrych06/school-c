#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int card;
time_t t;
int dgfsdwyufi()
{
    card = rand() % 11;
    printf("%i\n", card);
}

int main()
{
    srand((unsigned) time(&t));
    for(int i = 0; i > 5; i++)
    {
        dgfsdwyufi();
    }
}
