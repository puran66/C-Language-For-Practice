#include<stdio.h>

 int main(){
 	
 	int a[3][3],i,j,sum=0;
 	
 	for(i=0;i<3;i++){
 	    for(j=0;j<3;j++){
 	    	printf("Enter the elements :");
 	        scanf("%d",&a[i][j]);
		 }
	 }
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==j || i+j==2){
				sum=sum+a[i][j];
			}
		}
	}
	
	printf("the diagonal sum of elements is %d",sum);
	
	 return 0;
 }
