#include<stdio.h>
#include<math.h>

int N = 12;         // Globally declaring the values of N that corresponds to angle 0, 5, 10 ... 60 degrees
float TanArr[13];   // For storing tax(x), with a total of 13 values      
float degtorad(float degarg);
float traprule();

int main()
{
    int i;
    float a = 0.0, bDeg = 60.0;
    float deg;

    // Calculate the area at poiints x1, x2..., x11 and add them up
    for(i = 0; i <= N; i++)
    {
        deg = i * 5.0;
        TanArr[i] = tan(degtorad(deg));     // ((M_PI*deg)/180);
        printf("TanArr[%d] = %f\n", i, TanArr[i]);
    }

    float area = traprule();
    
    // Approximated Result
    printf("\nTrapezoidal Result = %f\n", area);

    // Actual result
    // Integral of tan is ln(2)

    printf("Real result is: %f\n", log(2.0));

    return 0;
}

float degtorad(float degarg)
{
    float pi = 3.1415927;
    return((pi * degarg)/180.0);
}

float traprule()
{
    float area;
    int i;

    // Sum tan(a) + tan(b) where 'a' and 'b' are radians
    area = TanArr[0] + TanArr[N];
    printf("\nInitial area(sum at x(0) and x(12)) = %f\n", area);

    for(i = 1; i < N; i++)
    {
        area = area + (2*TanArr[i]);
    }

    printf("The value of the sum after the loop is: %f\n", area);
    // Multiply area by (pi/3)/2(12) after converting it to radians
    float multRad = degtorad((60.0-0.0)/(2*N));     // (M_PI*((b_deg-a)/(2*N)))/180.0;
    area = multRad * area;

    return area;
}
