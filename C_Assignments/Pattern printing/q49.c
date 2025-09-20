#include<stdio.h>
int main(){
    int num;
    printf("Enter your number: ");
    scanf("%d",&num);
    int a=1;
    for (int i = 1; i <= num; i++)
    {
        for(int j=1; j<= num; j++){
            printf("%c ",a+64);
            a++;
        }
        printf("\n");
    }
    
    return 0;
}