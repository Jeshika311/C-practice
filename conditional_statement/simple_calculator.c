#include<stdio.h>
int main(){

    float number1,number2,option;

     printf("___Basic Calculations___\n");
     printf("1.Addition\n");
     printf("2.Subtraction\n");
     printf("3.Multiply\n");
     printf("4.Divide\n");
     printf("\n");

     printf("Select option \n");   
     scanf("%f" , &option);               //taking option from user

     printf("Enter number1 :-");          //taking input numbers from user to perform calculations
     scanf("%f" , &number1);
     printf("Enter number2 :-");
     scanf("%f" , &number2);

     if(option==1)
     {
      printf("Addition :- %f\n" , number1+number2);
     }
     else if(option==2)
     {
      printf("Subtraction :- %f\n" , number1-number2);
     }
     else if(option==3)
     {
      printf("Multiply :- %f\n" , number1*number2);
     }
     else if(option==4)
     { 
        if(number1==0 || number2==0){
            printf("INVALID INPUT\n");
            printf("Enter non zero numbers\n");
        }
        else{
        printf("Division :- %f\n" , number1/number2);
        }
     }
     else
     {
     printf("Invalid Input\n");
     }
     printf("___THANKYOU___");

     return 0;
};