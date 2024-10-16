#include<stdio.h>
int main(){
    int x; // x is the no. of days in a year

    printf("Enter year :-");  //taking input from user
    scanf("%d" , &x);

    if(x%4==0 )
        printf("It is leap year");
    
    else
        printf("It is not a leap year");
    
    return 0;
}