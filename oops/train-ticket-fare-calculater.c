// Fare = distace * rate (2 Rs/km). 10% discount for distance > 500 km  c  
#include <stdio.h>
int main() {
    float dist,fare;
    printf("Enter distance in km: ");
    scanf("%f",&dist);
    fare = dist*2;
    if(dist>500) fare *= 0.9;
    printf("Fare = %.2f\n", fare);
    return 0;
}