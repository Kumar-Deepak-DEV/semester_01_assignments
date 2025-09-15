#include<stdio.h>

void q5(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}

int main(){
    int n;
    printf("enter a no. ");
    scanf("%d",&n);
    q5(n);
    return 0;
}