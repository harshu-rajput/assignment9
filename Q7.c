#include<stdio.h>
int main(){
float unit,a,amt;

printf("enter the electricity unit ");
scanf("%f",&unit);
 
    

switch (unit<50)
{
       case 0 : 
       switch(unit<150){
              case 0:
                switch(unit<250){
                  case 0:
                        amt=25+75+120+(unit-250)*1.50;
                        break;
                        
                  case 1:amt=25+75+(unit-150)*1.20;
                  break;
                }

              case 1:  amt=25+(unit-50)*0.75;
                     break;
       }
      case 1 :   amt=unit*0.5;
      break;
                 

default: printf("invalid input");
        break;
          
    
}
a=amt+0.20*amt;
 printf("%f",(a)); 
return 0;
}