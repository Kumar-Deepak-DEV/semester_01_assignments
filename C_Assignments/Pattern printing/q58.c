#include<stdio.h>
int main(){
    int num;
    printf("Enter your number: ");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        for(int j=1; j<= num; j++){
            if(i==(num+1)/2 || j==(num+1)/2){
                printf("%d",j);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}