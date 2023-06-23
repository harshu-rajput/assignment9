#include<stdio.h>
int main(){
int i,num1,num2,num3;

printf("enter first no \n");
scanf("%d",&num1);

printf("enter first no \n");
scanf("%d",&num2);

printf("enter first no \n");
scanf("%d",&num3);

printf("press 1 : to check no are length of isosceles triangle \n");
printf("press 2 : to check no are side of right angled triangle \n");
printf("press 3 : to check no are length of equilateral triangle \n");
printf("press 4 : exit  \n");
scanf("%d",&i);

switch(i){

    case 1: if(num1==num2 || num2==num3 || num3==num1 ){
        printf("triangle is isosceles triangle");
    }else{
        printf("triangle is not  isosceles triangle");   
    }
        break;
    
    case 2: if((num1*num1==num2*num2+num3*num3) || num2*num2==num1*num1+num3*num3 || num3*num3==num2*num2+num1*num1){
          printf("triangle is right angled triangle");
    }else{
          printf("triangle is not right angled triangle");   
    }
    break;

    case 3: if(num1==num2 && num2==num3 && num3==num1 ){
        printf("triangle is equilateral triangle");
    }else{
        printf("triangle is not equilateral triangle");   
    }
        break;
    
    case 4: return 0;
    
    default :    printf("exit"); 
          break;

}    
return 0;
}