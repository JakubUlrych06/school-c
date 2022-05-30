#include <stdio.h>
#include <stdlib.h>

float jedna = 1;
float dva = 1.5;
float tri = 2;
float ctyry = 2.5;
float pet = 3;
float sest = 3.5;
float sedm = 4;
float osm = 4.5;
float devet = 5;
float sum = 0;


int main(void)
{
	int randomnumber = 0;

	for(int i = 0; i<20; i++)
    {
       
        randomnumber = rand() % 8;
        sum = sum + randomnumber;

        if (randomnumber = 0)
        {printf(" %f \n", jedna);}

         if (randomnumber = 1)
        {printf(" %f \n", dva);}

         if (randomnumber = 2)
        {printf(" %f \n", tri);}

         if (randomnumber = 3)
        {printf(" %f \n", ctyry);}

         if (randomnumber = 4)
        {printf(" %f \n", pet);}

         if (randomnumber = 5)
        {printf(" %f \n", sest);}

         if (randomnumber = 6)
        {printf(" %f \n", sedm);}

         if (randomnumber = 7)
        {printf(" %f \n", osm);}

         if (randomnumber = 8)
        {printf(" %f \n", devet);}

        
		
    }
    sum = sum / 20;
    printf ("\n \n %f", sum);

	return 0;
}
