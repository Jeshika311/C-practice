#include<stdio.h>
int main(){

    int n;
    printf("Enter the number of rows : ");
    scanf("%d", &n);
    for(int i=0;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            if(k==1 || k==i || i==4){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf(" \n");
    }
    return 0;
}