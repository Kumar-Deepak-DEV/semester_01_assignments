#include <stdio.h>
int main (){
    int num;
    printf("enter your number: ");
    scanf("%d",&num);
    int print=1;
    for (int i = 1; i <= num; i++)
    {
       for (int j= 1; j<=i; j++){
        printf("%d ", print);
        print++;
       }
        printf("\n");
    }
    

    return 0;
}