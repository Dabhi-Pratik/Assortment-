#include<stdio.h>

int main(){
	
	int i,j,r,c;
	
	printf("Enter the array's row size:");
	scanf("%d",&r);
	
	printf("Enter the array's column size:");
	scanf("%d",&c);
	
	int array[r][c];
	
	printf("Enter array's elements:\n");
	
	for( i=0; i<r; i++){
		for( j=0; j<c; j++){
			
			printf("a[%d][%d]:",i,j);
			scanf("%d",&array[j][i]);
		}
	}
	
	for( i=0; i<r; i++){
		for( j=0; j<c; j++){
			
			printf("%d",array[j][i]);
			
		}
	}
	
	
	
	

	
		
	return 0;
}
