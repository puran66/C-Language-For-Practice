#include<stdio.h>

 int main(){
 	int a=1;
 	int b;
 	int sum;
 	
 	
 	printf("Enter the value :");
 	scanf("%d",&b);
 	 do{
 		sum = a+sum;
 		a++;
	  }
 	 while(a<=b);
 	 
 	 printf("%d\n",sum);
	 return 0;
 }
