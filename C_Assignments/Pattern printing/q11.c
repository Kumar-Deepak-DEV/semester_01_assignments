#include<stdio.h>

void q11(int n){
    for (int i=1; i<=n; i++){
        for(int j=n-i; j>0; j--){
            printf("  ");
        }
        for(int k=1; k<=i; k++){
            printf("%d",k); 
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

    q11(n);

    return 0;
}