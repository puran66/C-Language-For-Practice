#include<stdio.h>

 int main(){
 	printf("******************************************\n \t Electricity Bill Genrate \n****************************************** \n\n");
 	
 	 float unit;
 	 float sum;
 	 float bill;
 	 
 	 printf("Enter the unit :");
 	 scanf("%f",&unit);
 	 
 	 if(unit<0){
 	 	printf("enter a valid amount!");
	  }
	 else if(unit<=50){
	 	
	 	sum = unit*0.50;
	 } 
	 else if(unit<=150){
	 	sum = ((unit-50)*0.75)+25;
	 }
	 else if(unit<=250){
	 	sum = ((unit-150)*1.20)+100;
	 }
	 else if(unit>250){
	 	sum = ((unit-250)*1.50)+220;
	 }
	 
	 bill = sum+(sum*0.20);
	 
	 printf("The totunitl bill is: %f",bill);
	 
	 return 0 ;
 }
