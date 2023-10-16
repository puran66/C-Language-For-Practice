#include<stdio.h>


 int main(){
 	
 	int a;
 	int b;
 	int c;
 	int d;
 	
 	printf("enter the value of a:");
 	scanf("%d",&a);
 	
 	printf("enter the value of b:");
 	scanf("%d",&b);
 	
 	printf("enter the value of c:");
 	scanf("%d",&c);
 	
 	printf("enter the value of d:");
 	scanf("%d",&d);
 	
 	if(a>b){
 		if(a>c){
 			if(a>d){
 				printf("a is max");
			 }
			else{
				printf("d is max");
			} 
		 }
		else{
			printf("c is max");
		} 
	 }
	else{
		if(b>c){
		    if(b>d){
		    	printf("b is max");
			}
			else{
				printf("d is max");
			}	
		}
		else{
			if(c>d){
				printf("c is max");
			}
			else{
				printf("d is max");
			}
		}
	} 
	return 0;
 }
