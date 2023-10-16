#include<stdio.h>

 int main(){
 	int a=1;
 	int n;
 	int m;
 	
 	printf("Enter the value :");
 	scanf("%d",&n);
 	
 	for(a=1;a<=10;a++){
 	   m=n*a;
 		printf("%d\n",m);
	 }
	 
	 return 0;
 }
