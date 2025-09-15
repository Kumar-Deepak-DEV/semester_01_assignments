#include<stdio.h>

void q9(int n){
    for (int i = 0; i < n; i++)
    {
        for(int j=0; j<=i; j++){
            printf("%c ", 65+j);
        }
        printf("\n");
    }
}

int main(){
    int n;
    printf("enter a no. ");

    scanf("%d",&n);
    q9(n);
    return 0;
}