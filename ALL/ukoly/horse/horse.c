#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
ve stáji jsou lidé a koně, Celkem je zde 22 hlav a 72 nohou. Kolik koňůa kolik lidí je ve stáji

l+k = 22

(2*l) + (4*k) = 72

2l + 4*(22-l) = 72

2l + 88 - 48 = 72
-2l = 16
l = 16/2 = 8

k = 14
*/
int horse = 21;
int people = 1;
  while( 4*horse + 2*people != 72)
{
    people++;
    horse--;
    
}
    printf("horses = %i, people = %i",horse, people);
    return 0;
}