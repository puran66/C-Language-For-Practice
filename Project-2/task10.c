#include<stdio.h>

 int main(){
 	int a=1;
 	int n;
 	int m;
 	
 	printf("Enter the value :");
 	scanf("%d",&n);
 	
 	
 	 do{
 		m=n*a;
 		printf("%d\n",m);
 		a++;  
	  }
 	 while(a<=10);
 	 
	 return 0;
 }
