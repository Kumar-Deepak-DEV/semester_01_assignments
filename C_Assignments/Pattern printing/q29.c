#include <stdio.h>
int main(){
    int num; 
    printf("Enter your number: ");
    scanf("%d",&num);
    for (int i=1; i<=num-1; i++ ){
        for (int k=1; k<=num-i; k++){
            printf(" ");
        }
        for(int j=1; j<= 2*i -1; j++){
            printf("*");
        }
        printf("\n");
    }
    for (int i=num; i>0; i-- ){
        for (int k=1; k<=num-i; k++){
            printf(" ");
        }
        for(int j=1; j<= 2*i -1; j++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}