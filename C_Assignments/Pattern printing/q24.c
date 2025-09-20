#include <stdio.h>
int main(){
    int num; 
    printf("Enter your number: ");
    scanf("%d",&num);
    for (int i=1; i<=num; i++){
        
        for(int k=1; k<=i; k++){
            printf("%d ",k);
        }
        for (int j=i; j>1; j--){
            printf("%d ",j-1);
        }
        printf("\n");
    }
    return 0;
}