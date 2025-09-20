#include<stdio.h>
int main(){
    int num;
    printf("Enter your number: ");
    scanf("%d",&num);

    for (int i=1; i<=num; i+=1){
        for(int j=1; j<=num; j+=1){
            if(i==1 || j==1 || j==num || i==num ) printf("*");
            else if{

            }
        }
    }

    return 0;
}
