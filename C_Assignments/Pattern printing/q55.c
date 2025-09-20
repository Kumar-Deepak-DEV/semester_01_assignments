#include<stdio.h>
int main(){
    int num;
    printf("Enter your number: ");
    scanf("%d",&num);
    int ml=2*num -1, line;
    for (int i = 1; i <= ml; i++)
    {
        if(i<=num)
            line = i;
        else 
            line= ml-i+1; 

        for(int k=1; k<=num-line; k++ ){
            printf("  ");
        }

        for(int j = 1; j<=line; j++){
            printf("%d ",j);
        }
        for(int m=line-1; m>0; m--){
            printf("%d ",m);
        }
        printf("\n");
        }
    return 0;
}