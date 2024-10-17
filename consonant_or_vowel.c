#include<stdio.h>
#include<ctype.h>
int main()
{
    char alphabet;
    printf("Enter any alphabet : ");
    scanf("%c" , &alphabet);

    if(!isalpha(alphabet)){
        printf("Invalid Input,please enter a alphabet\n");
    }
    else{

    switch(alphabet)
    {
     case 'a':
     case 'A':
     case 'e':
     case 'E':
     case 'i':
     case 'I':
     case 'o':
     case 'O':
     case 'u':
     case 'U':
        printf("vowel\n");
        break;
    default:
        printf("consonant\n");
        break;
    }
    }
    printf("___THANKYOU___");
    return 0;
}