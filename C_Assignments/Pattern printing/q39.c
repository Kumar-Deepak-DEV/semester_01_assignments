#include <stdio.h>
int main(){
    int num; 
    printf("Enter your number: ");
    scanf("%d",&num);
    for (int i=num; i>0; i--){
        for (int j=num; j>i; j--){
            printf(" ");
        }
        for(int k=1; k<=i; k++){
            printf("%c",k+64);
        }
        printf("\n");
    }
    return 0;
}