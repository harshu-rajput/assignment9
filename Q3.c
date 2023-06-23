#include<stdio.h>
int main(){
int day_no;

printf("enter day no \n");
scanf("%d",&day_no);

switch(day_no){

    case 1: printf("hi,today is sunday");
    break;
    case 2: printf("hi,today is monday");
    break;
    case 3: printf("hi,today is tuesday");
    break;
    case 4: printf("hi,today is wednesday");
    break;
    case 5: printf("hi,today is thrusday");
    break;
    case 6: printf("hi,today is friday");
    break;
    case 7: printf("hi,today is saturday");
    break;
    default: printf("invalid input");
    break;
}
return 0;
}