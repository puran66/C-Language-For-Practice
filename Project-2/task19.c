#include<stdio.h>

 int main(){
 	int a,b;
 	int n;
 	 a=b=1;
 	
 	printf("Enter the value for factorial:");
 	scanf("%d",&n);
 	
 	for(a=1;a<=n;a++){
 	   b=b*a;
	 }
	 printf("The factorial is : %d",b);
	 
	 return 0;
 }
