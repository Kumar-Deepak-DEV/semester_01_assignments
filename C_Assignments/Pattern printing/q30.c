#include<stdio.h>
int main(){
    int num; 
    printf("Enter your number: ");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        for(int j=1; j<=num-i; j++){
            printf(" ");
        }
        for (int k=1; k<=i; k++){
            printf("%c", k+64);
        }
        for(int l=i-1; l>0; l--){
            printf("%c", l+64);
        }
        printf("\n");
    }
    for (int i = num-1; i > 0; i--)
    {
        for(int j=1; j<=num-i; j++){
            printf(" ");
        }
        for(int k=1; k<=i; k++){
            printf("%c",k+64);
        }
        for(int l=i-1; l>0; l--){
            printf("%c",l+64);
        }
        printf("\n");
    }
    
    return 0;
}
