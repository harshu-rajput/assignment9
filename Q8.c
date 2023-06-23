#include<stdio.h>
int main(){
    signed int i,a;
printf("enter the no\n");
scanf("%d",&i);

if(i>=0){
    a=1;
}
else{
    a=2;
}
switch(i>=0){
      case 1 : a=1;
      break;
      case 0 : a=0;
      break;
}
switch(a){

    case 0:
    printf("%d",(i*(-1)));
     break;
    case 1: 
     printf("%d",(i*(-1)));
     break;
}
return 0;
}