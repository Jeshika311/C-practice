#include<stdio.h>
int main(){
    float units;

    printf("Enter Units: ");
    scanf("%f" , &units);

    if(units<0)
    {
        printf("Invalid Input\n");
    }
    else if(units<=100)
    {
        printf("Your electricity bill is zero\n");
    }
    else if(units<=300)
    {
        printf("Your electricity bill is :-%f\n" , (units -100)*5.00);
    }
    else
    {
        printf("Your electricity bill is :-%f\n" , (200)*5.00 + (units-300)*10.00);
    }
    printf("___THANKYOU___\n");
    return 0;
};