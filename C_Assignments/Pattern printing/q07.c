#include<stdio.h>

void q7(int n){
    for (int i = 1; i <= n; i++)
    {
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}

int main(){
    int n;
    printf("enter a no. ");
    scanf("%d",&n);
    q7(n);
    return 0;
}