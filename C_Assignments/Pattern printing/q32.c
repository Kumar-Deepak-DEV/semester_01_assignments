#include<stdio.h>
int main(){
    int num;
    printf("Enter your number: ");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        for(int j=1; j<=num; j++){
            if(j==1 || i==num|| i==j)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    

    return 0;
}








