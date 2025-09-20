#include<stdio.h>
int main(){
    int num;
    printf("Enter your number: ");
    scanf("%d",&num);
    for (int i = 1; i <=num; i++)
    {
        for (int j=1; j<2*num; j++){
            if((i+j==num+1) || (j-i == num-1) || (i==num)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}