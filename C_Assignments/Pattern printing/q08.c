#include<stdio.h>

void q8(int n){
    for (int i = 0; i <= n; i++)
    {
        for(int j=1; j<=i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}

int main(){
    int n;
    printf("enter a no. ");
    scanf("%d",&n);
    q8(n);
    return 0;
}