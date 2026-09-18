/*Write a C program to convert a given integer (in days) to years, months and days, assuming that all months 
have 30 days and all years have 365 days.*/
#include<stdio.h>
int main(){
    int days;
    int year , weeks ;

    printf("Enter total days: ");
    scanf("%d", &days);

    year = days/365;
    weeks = (days%365)/7;
    days = days - ((year*365)+(weeks*7));
    printf("year: %d", year);
    printf("\n");
    printf("weeks:%d" , weeks);
    printf("\n");
    printf("days:%d", days);
    printf("\n");
    return 0;
}