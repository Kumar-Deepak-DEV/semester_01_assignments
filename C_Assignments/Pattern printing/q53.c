#include<stdio.h>
int main(){
    int num, a=1;
    printf("Enter your number: ");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        for(int j=num; j>i; j--){
            printf("  ");
        }
        for(int k=1; k<2*i; k++){

            if(a<10)printf("%d ",a);
            
            else printf("%d ",a);
            a+=1;
        }
        printf("\n");
    }
    

    return 0;
}