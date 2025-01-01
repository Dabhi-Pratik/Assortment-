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
	
		printf("\n");
	
	
   int sum = 0;


	int k;
	
	for(i=0 ;i<r ;i++){
		 printf("Rows :");
		 
		for(j=0 ;j<c ;j++){
			
			for(k=0 ;k<r ;k++){
				if(i==k){
		    	
		    	printf("%d,",array[i][j]);
		    	
	    	    }
	    	}	
	    }
	
		printf("\n");	
	  }
	  
	  for(i=0; i<r; i++){
	  	for(j=0; j<c; j++){
	  		 sum += array[i][j];
		  }
		  printf("\n");
		  printf("The sum of a row :%d",sum);
		  sum=0;
		 
	  }
	  
	  printf("\n");
	   printf("\n");
		 
		 
		for(j=0 ;j<c ;j++){
			  printf("column :");
			for(k=0 ;k<r ;k++){
		    printf("%d,",array[k][j]);   
	    	}	
	    	 printf("\n");
	    }
   
	for(j=0; j<c; j++){
		 for(k=0; k<c; k++){
		 
		 
	  		 sum += array[k][j];
		  }
		  printf("\n");
		  printf("The sum of a column :%d",sum);
		  sum=0;
		 
	  }
  
		
	


  

	
		
	return 0;
}
