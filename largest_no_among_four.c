#include<stdio.h>
int main(){
    int num1,num2,num3,num4;

    printf("Enter number 1 :-");          //taking numbers as input from user
    scanf("%d/n" , &num1);
    printf("Enter number 2 :-");
    scanf("%d/n" , &num2);
    printf("Enter number 3 :-");
    scanf("%d/n" , &num3);
    printf("Enter number 4 :-");
    scanf("%d/n" , &num4);

    if(num1!=num2 && num2!=num3 && num3!=num4 && num4!=num1 && num2!=num4 && num1!=num3)
    {
        if(num1>num2 && num1>num3 && num1>num4){
            printf("Number 1 is largest among them\n");
        }
        else if(num2>num1 && num2>num3 && num2>num4){
            printf("Number 2 is largest among them\n");
        }
        else if(num3>num1 && num3>num2 && num3>num4){
            printf("Number 3 is largest among them\n");
        }
        else{
            printf("Number 4 is largest among them\n");
        }
    }
    else{
        printf("Two or more numbers are equal\n");
        printf("Enter different numbers\n");
    }
    printf("___THANKYOU___");
    return 0;
}