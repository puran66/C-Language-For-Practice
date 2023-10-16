#include<stdio.h>

 int main(){
 	int a;
 	int b;
 	
 	printf("enter the value: ");
 	scanf("%d",&b);
 	
 	for(a=1;a<=b;a++){
 	    if(a%2 !=0){
	       	printf("%d\n",a);
		   }	
	 }
	 return 0;
 }
