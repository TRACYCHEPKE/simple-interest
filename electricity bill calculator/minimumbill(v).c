//prompt the user to set minimum bill be 100
/*
author:tracy chepkemoi
admission:CT101/G/24016/24
*/
#include<stdio.h>
int main(){
int customerID,unitConsumed;
char customerName[50];
float totalbill,chargeperunit,surcharge;

printf("enter customerID:");
scanf("%d",&customerID);

printf("enter customerName:");
scanf("%s",&customerName);

printf("enter unitConsumed:");
scanf("%d",&unitConsumed);

if(unitConsumed<=199){
chargeperunit=1.20;
}
else if(unitConsumed>=200&&unitConsumed<400){
chargeperunit=1.50;
}
else if(unitConsumed>=400&&unitConsumed<600){
chargeperunit=1.80;
}
else{
chargeperunit=2.00;}

totalbill=unitConsumed*chargeperunit;

if(totalbill>400){
surcharge=totalbill*0.15;
totalbill+=surcharge;}

if(totalbill<100){
totalbill=100;
}
printf("totalbill:%.2f\n",totalbill);


return 0;
}
