#include<stdio.h>

 int main(){
 	
 	int a[3][3],b[3][3],c[3][3],i,j;
 	
 	printf("Enter the first matrix elements value:\n");
 	
 	for(i=0;i<3;i++){
 	    for(j=0;j<3;j++){
 	    	printf("Enter the elements :");
 	        scanf("%d",&a[i][j]);
		 }
	}
	
	 printf("Enter the second matrix elements value:\n");
	 
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter the elements :");
 	        scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	} 
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	} 
	return 0;
 }
