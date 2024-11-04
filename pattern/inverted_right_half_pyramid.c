#include<stdio.h>
int main(){

    int n;
    printf("Enter the number of rows : ");
    scanf("%d", &n);
    for(int i=0;i<=n;i++){
        for(int j=0;j<=2*i;j++){
            printf(" ");
        }
        for(int k=1;k<=(n-i);k++){
            printf("* ");
        }
        printf(" \n");
    }
    return 0;
}
