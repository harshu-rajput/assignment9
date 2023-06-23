#include<stdio.h>
int main(){
int i,year;

printf("enter the month no : ");
scanf("%d",&i);

switch(i){

    case 1: printf(" january = 31 days ");
            break;

    case 2: {
            printf(" enetr the year ");
            scanf("%d,&year");
             
             if( year%4==0 || year%400==0){
                   if ( year%100==0 ){
                  printf(" february = 28 days "); 
                   }
                   else{
                     printf(" february = 29 days "); 
                   }
                      
             } else {
                printf(" february = 28 days "); 
             }
            
            break;
            }        

    case 3: printf(" march = 31 days ");
            break;

    case 4: printf(" april = 30 days ");
            break;

    case 5: printf(" may = 31 days ");
            break;

    case 6: printf(" june = 30 days ");
            break;

    case 7: printf(" july = 31 days ");
            break;

    case 8: printf(" august = 31 days ");
            break;

    case 9: printf(" september = 30 days ");
            break;

    case 10: printf(" october = 31 days ");
            break;

    case 11: printf(" november = 30 days ");
            break;

    case 12: printf(" december = 31 days ");
            break;

        default : printf("invalid input");
                break;
}
return 0;
}