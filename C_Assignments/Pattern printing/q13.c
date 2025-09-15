#include<stdio.h>

void q13(int n){
    for (int i = 1; i <= n; i++)
    {
        for(int j=1; j<= n-i; j++){
            printf(" ");
        }
        
    
    for(int k=1; k<= i*2 - 1; k++){
        printf("*");
    }
    printf("\n");
    }
}

// void q13(int n){
//     for (int i = 1; i <= n; i++)
//     {
//         for(int j=1; j<= n-i; j++){
//             printf(" ");
//         }
//     for(int k=0; k< i*2 - 1; k++){
//         printf("*");
//     }
//     printf("\n");
//     }
// }

int main(){
    int n;
    printf("enter a no. ");
    scanf("%d",&n);

    q13(n);

    return 0;
}