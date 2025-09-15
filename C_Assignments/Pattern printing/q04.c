#include<stdio.h>

void q4(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main(){
    int n;
    printf("enter a no. ");
    scanf("%d",&n);
    q4(n);
    return 0;
}