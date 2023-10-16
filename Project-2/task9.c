#include<stdio.h>

 int main(){
 	int a,b;
 	int n;
 	 a=b=1;
 	
 	printf("Enter the value for factorial:");
 	scanf("%d",&n);
 	
 	 do{
 		b=b*a;
 		a++;
	  }
 	 while(a<=n);
 	 
 	 printf("The factorial is : %d",b);
	 return 0;
 }
