#include<stdio.h>
int main(){
    int j,number[5],i,max=0,pos=0;
    printf("Enter 5 integers: \n");
    for(i=0;i<5;i++){
        scanf("%d" , &number[i]);
    }
    for(j=0;j<5;j++){
        if(number[j]>max){
            max = number[j];
            pos = j;
        }
    }
    printf("The maximum number is %d\n", max);
    printf("And its position is %d", pos+1);
}