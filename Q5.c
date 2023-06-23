#include<stdio.h>
int main(){
int var;

printf("enter 1 for good \n");
printf("enter 2 for better \n");
printf("enter 3 for best \n");
scanf("%d",&var); 

switch(var){

    case 1: printf("good");
            break;
    case 2: printf("better");
            break;
    case 3: printf("best");
            break; 
    default :printf("invalid");
            break;                       
}

return 0;
}