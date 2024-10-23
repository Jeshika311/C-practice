#include<stdio.h>
#include<ctype.h>
int main(){

    float percentage;

    printf("Enter your perecntage : ");
    scanf("%f" , &percentage);

    if(percentage<=100 && percentage>=90)
    {
        printf("Grade = A\n");
    }
    else if(percentage<90 && percentage>=80)
    {
        printf("Grade = B\n");
    }
    else if(percentage<80 && percentage>=70)
    {
        printf("Grade = C\n");
    }
    else if(percentage<70 && percentage>=60)
    {
        printf("Grade = D\n");
    } 
    else{
        printf("FAIL\n");
    }
    printf("___THANKYOU___\n");

    return 0;
}