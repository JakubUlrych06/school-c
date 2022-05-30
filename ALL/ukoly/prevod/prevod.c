#include <stdio.h>
#include <stdlib.h>

float resultsDegToRad;
float resultsRadToDge;
int radians;
int degrees;



float degToRad(int degrees)
{
    resultsDegToRad = 0.0174532925 * degrees;
}

float radToDge(int radians)
{
    resultsRadToDge = 57.2958 * radians;
}

int main()
{   degrees = 10;
    radians = 5;
    radToDge (radians);
    degToRad (degrees);

    printf("Results for degrees to radians: ""%f""\n", resultsDegToRad);
    printf("Results for radians to degrees: ""%f""\n", resultsRadToDge);  
    
}



