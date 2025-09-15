#include<stdio.h>

void q12(int n){
    for (int i = 0; i < n; i++)
    {
        for(int j=n-i; j>0; j--){
            printf("  ");
        }
        for(int k=0; k<=i; k++){
            printf("%c", 65+k);
            if(k!=i){
                printf(" ");
            }
        }
        printf("\n");
    }   
}

int main(){
    int n;
    printf("enter a no. ");
    scanf("%d",&n);

    q12(n);

    return 0;
}