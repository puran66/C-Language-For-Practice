#include<stdio.h>


 int main(){
 	char a;
 	
 	printf("Enter Day :");
 	scanf("%c",&a);
 	
 	switch(a){
 		default :
 			printf("enter valid charcter!\n\t (Example:First later of the charcter- Monday='M') \n(code for Thuseday='TH' Sunday='SUN')");
 			
 		case 'M':
 			printf("the day is Monday");
 			break;
 			
 		case 'T':
 			printf("the day is Monday");
 			break;
		
		case 'W':
 			printf("the day is Monday");
 			break;
			 
		case 'TH':
 			printf("the day is Monday");
 			break;
			 
		case 'F':
 			printf("the day is Monday");
 			break;
			 
		case 'S':
 			printf("the day is Monday");
 			break;
		
		case 'SUN':
 			printf("the day is Monday");
			break;	 	 	 	 	 	
	}
	return 0;
 }
