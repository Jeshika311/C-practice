#include<stdio.h>
int main(){

    int n;
    printf("Enter the number of rows : ");
    scanf("%d", &n);
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            printf(" ");
        }
        for(int k=0;k<=(n-i);k++){
            if(i==0 || k==0 || k==(n-i)){
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
