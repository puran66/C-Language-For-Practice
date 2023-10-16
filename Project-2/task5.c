#include<stdio.h>

 int main(){
 	int a =1;
 	int b;
 	
 	printf("enter the value: ");
 	scanf("%d",&b);
 	
 	 do{
 		if(a%2 !=0){
	       	printf("%d\n",a);
		   }
		   a++;
	  }
 	 while(a<=b);
	 return 0;
 }
