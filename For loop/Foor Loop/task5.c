#include<stdio.h>


int main(){
	int n,sum=0;
	
	printf("Enter the size of array :");
	scanf("%d",&n);
	
	int a[n][n],i,j;
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("Enter the array Elements :");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",a[i][j]);
		}
			printf("\n");
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			sum=sum+a[j][i];
		
		}
			printf("The %d column sum =>%d\n",i+1,sum);
			printf("\n");
	}
	
	return 0;
}
