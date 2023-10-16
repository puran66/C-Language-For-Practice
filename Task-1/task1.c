#include<stdio.h>

void swap(int *a,int *b){
	  int swp;
	  
	  swp=*b;
	  *b=*a;
	  *a=swp;
	  
	  printf("the swap of a => %d\n",*a);
	  printf("the swap of a => %d",*b);
}

int main(){
	int s,p;
	
	printf("Enter the value :");
	scanf("%d",&s);
	
	printf("Enter the value :");
	scanf("%d",&p);
	
	swap(&s,&p);
	
	return 0;
}