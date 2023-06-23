#include<stdio.h>
int main(){
    signed int i,a;
printf("enter the even no\n");
scanf("%d",&i);

if(i%2==0){
    a=1;
}
else{
    a=2;
   
}

switch(a){

    case 1:
    printf("%d",(i+1));
     break;
    case 2: 
     printf("enter no is odd\n");
     break;
}
return 0;
}