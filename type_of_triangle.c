#include<stdio.h>
int main(){

    // Define sides of a triangle
    float side1;
    float side2;
    float side3;

    // Taking input from user

    printf("Enter side1 :-");
    scanf("%f", &side1);
    printf("Enter side2 :-");
    scanf("%f", &side2);
    printf("Enter side3 :-");
    scanf("%f", &side3);

    // Specify type of triangle 

    if(side1 + side2 >= side3 && side2 + side3 >= side1 && side1 + side3 >= side2)
    {
        if(side1==side2 && side2==side3 && side1==side3){
            printf("Given sides are of equilateral triangle\n");
        }
        else if(side1!=side2 && side2!=side3 && side3!=side1){
            printf("Given sides are of scalene triangle\n");
        }
        else {
            printf("Given sides are of isosceles triangle\n");
        }
    }
    else{
        printf("Given sides do not form a valid triangle\n");
    }
    return 0;
}
