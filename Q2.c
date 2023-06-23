#include<stdio.h>
int main(){
int x,y,a;


printf("enter first no \n");
scanf("%d",&x);
printf("enter second no \n");
scanf("%d",&y);

printf("press 1 : addition \n");
printf("press 2 : subtraction \n");
printf("press 3 : multiplication \n");
printf("press 4 : division \n");
printf("press 5 : exit \n");
scanf("%d",&a);

switch(a){

    case 1:printf("%d",x+y);
           break;
    case 2:printf("%d",x-y);
           break;
    case 3:printf("%d",x*y);
           break;
    case 4:printf("%d",x/y);
           break;
    case 5:return 0;
         
    default : printf("invalid input");
           break;                                  
}


return 0;
}