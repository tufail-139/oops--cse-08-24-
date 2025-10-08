// read prices of n items, calculate total, apply 5% GST.
#include <stdio.h>
int main() {
    int n,i; float price,total=0;
    printf("Enter number of items: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){ 
        scanf("%f",&price); 
        total+=price; 
    }
    total += total*0.05; // GST 5%
    printf("Final Bill = %.2f\n", total);
    return 0;
}