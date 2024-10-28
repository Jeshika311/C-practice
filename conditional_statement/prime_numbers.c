#include<stdio.h>
int main()
{
    int start,end;

    printf("Enter the start number: ");
    scanf("%d", &start);
    printf("Enter the end number:");
    scanf("%d" , &end);

    printf("Prime numbers between %d and %d: \n" , start,end);

    for(int num=start ; num<=end ; num++)
    {
        if(num<=1){
            continue;
        }
        int is_prime = 1;
        for(int i =2 ; i<num ; i++)
        {
            if(num%i==0){
                is_prime=0;
                break;
            }
        }
        if(is_prime){
            printf("%d" , num);
        }
    }
    printf("\n");
    return 0;
}