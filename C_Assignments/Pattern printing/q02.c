#include<stdio.h>

void q2(int n){
    for (int i = 1; i <= n; i++)
    {
        printf("%d ",i);
    }
}

int main(){
    int n;
    printf("enter a no. ");
    scanf("%d",&n);
    q2(n);
    return 0;
}