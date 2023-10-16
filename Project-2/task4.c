#include<stdio.h>

 int main(){
 	int a =1;
 	int b;
 	
 	printf("enter the value: ");
 	scanf("%d",&b);
 	
 	 do{
 		printf("%d\n",b);
 		b--;
	  }
 	 while(b>=a);
	 return 0;
 }
