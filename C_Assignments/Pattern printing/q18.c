#include <stdio.h>
int main (){
    int num;
    printf("enter your number: ");
    scanf("%d",&num);

    for (int i = num; i > 0; i--)
    {
        for(int j=0; j<i; j++){
            printf("%c ", 65+j);
        }
        printf("\n");
    }
    

    return 0;
}