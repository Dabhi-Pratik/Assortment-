#include<stdio.h>

int main(){
	
	int i,j,r,c;
	
	printf("Enter the array's row size:");
	scanf("%d",&r);
	
	printf("Enter the array's column size:");
	scanf("%d",&c);
	
	int array[r][c];
	int max=0;
	
	printf("Enter array's elements:\n");
	
	for( i=0; i<r; i++){
		for( j=0; j<c; j++){
			
			printf("a[%d][%d]:",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	
	 
	
	for( i=0; i<r; i++){
		for( j=0; j<c; j++){
			if( max<array[i][j]){
				max=array[i][j];
			}	
		}
	}
	
	printf("The largest element is: %d",max);
	

	
		
	return 0;
}
