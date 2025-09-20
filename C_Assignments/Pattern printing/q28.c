#include <stdio.h>
int main(){
    int num; 
    printf("Enter your number: ");
    scanf("%d",&num);
    for (int i=num; i>0; i-- ){
        for (int k=1; k<=num-i; k++){
            printf("  ");
        }
        for(int j=1; j<= 2*i -1; j++){
            printf("%c ",j+64);
        }
        printf("\n");
    }
    return 0;
}