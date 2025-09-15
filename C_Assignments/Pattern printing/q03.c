#include<stdio.h>

void q3(int n){
    for (int i=0; i<n; i++){
        printf("%c", i+65);
    }
}


int main(){
    int n;
    printf("enter a no. ");
    scanf("%d ",&n);
    q3(n);
    return 0;
}