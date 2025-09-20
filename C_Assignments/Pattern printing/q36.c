#include<stdio.h>
int main(){
    int num;
    printf("Enter your number: ");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        for(int j=1; j<=i; j++){
            printf(" ");
        }
        for(int j=1; j<=i; j++){
            printf("%c",j+64);
        }
        printf("\n");
    }
    
    return 0;
}