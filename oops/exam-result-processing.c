// read 5 students' marks, count how many passed (>=40) 
#include <stdio.h>
int main() {
    int marks[5],i,pass=0;
    for(i=0;i<5;i++){ 
        printf("Enter marks: "); 
        scanf("%d",&marks[i]); 
    }
    for(i=0;i<5;i++) 
        if(marks[i]>=40) pass++;
    printf("Passed=%d, Failed=%d\n", pass, 5-pass);
    return 0;
}