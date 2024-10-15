#include<stdio.h>
#include<math.h>

float degtorad(float degarg);

int main()
{
    int N = 12, i;
    float a = 0.0, bDeg = 60.0;
    float TanArr[N+1];
    float deg;

    // Calculate the area at poiints x1, x2..., x11 and add them up
    for(i = 0; i < N; i++)
    {
        deg = i * 5.0;
        TanArr[i] = tan(degtorad(deg));     // ((M_PI*deg)/180);
        printf("TanArr[%d] = %f\n", i, TanArr[i]);
    }

    // Sum tan(a) + tan(b) where a and b are in radians
    float area = TanArr[0] + TanArr[N];
    printf("\nInitial area (sum at x(0) and x(12)) = %f\n", area);

    for(i = 1; i < N; i++)
    {
        area = area + 2 * TanArr[i];
    }

    printf("The value of the sum after the loop is: %f\n", area);
    // Multiply area by (pi/3)/2(12) after converting it to radians
    float multRad = degtorad(bDeg - a)/(2*N);   // (M_PI*((bDeg - a)/(2*N)))/180.0;
    area = multRad*area;

    // Approximated Result
    printf("\nTrapzoidal result is: %f\n", area);
    // Actual result
    // Inegral of tan is ln(2)

    printf("Real result is: %f\n", log(2.0));

    return 0;
}

float degtorad(float degarg)
{
    float pi = 3.1415927;
    return((pi * degarg) / 180.0);
}