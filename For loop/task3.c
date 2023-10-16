#include<stdio.h>

int main(){
	int m,n,sum,count,averg;
	
	printf("Enter the size of row :");
	scanf("%d",&m);
	
	printf("Enter the size of column:");
	scanf("%d",&n);
	
	int a[m][n],i,j;
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter the elements :");
			scanf("%d",&a[i][j]);
		}
	}
	sum =0;
	count =m*n;
	
	for(i=0;i<=m;i++){
		for(j=0;j<n;j++){
			sum=sum+a[i][j];
		}
	}
	averg =sum/count;
	
	printf("The average of array is %d ",averg);
	
	return 0;
}
