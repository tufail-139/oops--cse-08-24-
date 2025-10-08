// single room = 1000 Rs/day, double room = 1800 Rs/day.
#include <stdio.h>
int main() {
    int days,type; float bill;
    printf("Enter room type (1=Single,2=Double): ");
    scanf("%d",&type);
    printf("Enter days: ");
    scanf("%d",&days);
    if(type==1) bill=days*1000;
    else bill=days*1800;
    printf("Total Bill = %.2f\n", bill);
    return 0;
}