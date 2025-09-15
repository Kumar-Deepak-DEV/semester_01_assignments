#include<stdio.h>

void q10(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j=0; j< n; j++)
        {
            if ((i+j)<n-1)
                printf(" ");
            else 
                printf("*");
        }
        printf("\n");
    }
}

int main(){
    int n;
    printf("enter a no. ");
    scanf("%d",&n);

    q10(n);

    return 0;
}