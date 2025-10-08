// count cars and bikes entering, calculate fee (cars: 50, bikes: 20
#include <stdio.h>
int main() {
    int car=0,bike=0,ch;
    do {
        printf("\n1.Car 2.Bike 3.Exit\nChoice: ");
        scanf("%d",&ch);
        if(ch==1) car++;
        else if(ch==2) bike++;
    } while(ch!=3);
    printf("Cars=%d, Bikes=%d, Total Fee=%d\n", car,bike,car*50+bike*20);
    return 0;
}