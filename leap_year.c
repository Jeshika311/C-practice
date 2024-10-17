#include<stdio.h>
int main(){
    int year; // year is the no. of days in a year

    printf("Enter year :-");  //taking input from user
    scanf("%d" , &year);

    if((year%400==0) || (year%4==0 && year%100!=0)){ 
        printf("It is leap year");
    }
    else{
        printf("It is not a leap year");
    }
    
    return 0;
}