#include<stdio.h>

int main(){
	int i,j,count=1;
	
	for(i=5;i>=1;i--){
		for(j=i;j<=5;j++){
		  
		   if(j%2 == 0){
				printf("|");
			}
			else{
				printf("-");
			}	
	
		}
		printf("\n");
	}
	return 0;
}
