#include<stdio.h>

 int main(){
 	int a;
 	int b;
 	int sum;
 	
 	
 	printf("Enter the value :");
 	scanf("%d",&b);
 	
 	for(a=1;a<=b;a++){
 	   sum = a+sum;	
	 }
	 printf("%d\n",sum);
	 
	 return 0;
 }
