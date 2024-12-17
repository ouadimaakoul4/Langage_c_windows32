#include<stdio.h>
int main(){
    int n,m,sum ;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    if(n < 1){
        printf("Invalid input. Please enter a positive integer.");
        return 0;
    }
    
    printf("Enter a negative integer: ");
    scanf("%d", &m);
    if(m>=0){
        printf("Invalid input. Please enter a negative integer.");
        return 0;
    }
    
    sum = n + m;
    printf("Sum of the two numbers: %d\n", sum);
}