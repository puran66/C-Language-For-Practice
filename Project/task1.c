#include<stdio.h>

 int main(){
 	char a;
 	
 	printf("Enter The Value: ");
 	scanf("%c",&a);
 	
 	if((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z' ) ){
 		printf("Your value is Alphabet");
	 }
	else if(a>='1' && a<='9') {
		printf("the value is Digit");
	}
	else{
		printf("The value is speacial Alphabet");
	}
	return 0;
 }
