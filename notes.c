//Write a C program to read an amount (integer value) and break the amount into the smallest possible number of bank notes.
#include<stdio.h>
int main(){
    int amount;
    printf("Enter amount : ");
    scanf("%d", &amount);

    int total = amount/100;
    printf("There are %d notes of 100", total);
    printf("\n");
    amount = amount - (total*100);

     total = amount/50;
     printf("There are %d notes of 50", total);
     printf("\n");
     amount = amount - (total*50);

     total = amount/20;
     printf("There are %d notes of 20", total);
      printf("\n");
     amount = amount - (total*20);

     total = amount/10;
     printf("There are %d notes of 10", total);
      printf("\n");
     amount = amount - (total*10);

     total = amount/5;
     printf("There are %d coins of 5", total);
      printf("\n");
     amount = amount - (total*5);

     total = amount/2;
     printf("There are %d coins of 2", total);
      printf("\n");
     amount = amount - (total*2);

     total = amount/1;
     printf("There are %d coins of 1", total);
      printf("\n");
     





    
}