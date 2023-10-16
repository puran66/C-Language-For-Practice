#include<stdio.h>
#include<string.h>


int main(){
	char a[20];
	int i;
	
	printf("Enter the string :");
	gets(a);
	
	for(i=0;i<strlen(a);i++){
	    if(a[i]>='A' && a[i]<='Z'){
	    	a[i] +=32;
		}
		else{
			a[i] -=32;
		}
	}
	
	
	printf("%s",a);
	
	
	return 0;
}