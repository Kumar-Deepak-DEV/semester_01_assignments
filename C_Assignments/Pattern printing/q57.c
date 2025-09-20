#include<stdio.h>
int main(){

    int num, min;
    scanf("%d",&num);
    for (int i=1; i<=num; i++){
        for (int j=1; j<=num; j++){
            if (i<j) min=i;
            else min=j;
            if((num-i)< min) min=num-i+1; 
            if((num-j)< min) min=num-j+1;

            printf("%d",min);
        }
        printf("\n");
    }
    return 0;
}
