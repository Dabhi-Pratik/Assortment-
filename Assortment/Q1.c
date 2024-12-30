#include<stdio.h>

int main(){
	
	int i,size;
	
	printf("Enter arry size:");
	scanf("%d",&size);
	
	int arr[size];
	
	 for (i = 0; i<size; i++) {
    	
        printf("arr[%d] = ",i);
        scanf("%d", &arr[i]);
    }
	
	 printf("Negative element:");
	 
	for( i=0; i<size; i++){
		
		if( arr[i]<0){
			printf("%d",arr[i]);
		}
	}
	
		
	return 0;
}
