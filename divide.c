/*Write a program that reads two numbers and divides the first number by the second number. 
If division is not possible print "Division is not possible".*/
#include<stdio.h>
int main(){
    float x,y,result;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);

if(y!=0){
    result =x/y;
    printf("Dividation of the numbes is %f", result);
    }
else{
    printf("Division is not possible");
}
}