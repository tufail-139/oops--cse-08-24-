#include<stdio.h>
int main() {
    int choice;
    float num1,num2,result;
    printf("calculator using switch");
    printf("1.addition\n");
    printf("2.Subtraction\n");
    printf("3.multiplication\n");
    printf("division\n");

    printf("enter your choice\n");
    scanf("%d",&choice);

    printf("enter two numbers: \n");
    scanf("%f %f",&num1,&num2);

    switch(choice) {
    case 1:
    result = num1 + num2;
    printf("result=%f\n",result);
    break;

    case2:
    result = num1 - num2;
    printf("result=%f\n",result);
    break; 

    case3:
    result = num1 * num2;
    printf("result=%f\n",result);
    break; 


    case4:
    result = num1 / num2;
    printf("result=%f\n",result);
    break;
}
    return 0;
}