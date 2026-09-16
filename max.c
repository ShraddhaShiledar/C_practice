#include<stdio.h>
int main(){
    int a, b, c , max;
    
    printf("Enter first integer: ");
    scanf("%d", &a);
    
    printf("Enter second integer : ");
    scanf("%d",&b);

    printf("Enter third integer: ");
    scanf("%d", &c);

    if(a>b && a>c){
        printf("The maximum number is %d" , a);
    }

    else if(b>a && b>c){
        printf("The maximum number is %d", b);
    } 
    
    else{
        printf("THe maximum number is %d",c);
    }
    return 0;
}