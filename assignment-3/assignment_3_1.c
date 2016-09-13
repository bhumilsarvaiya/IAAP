#include<stdio.h>
#include<stdlib.h>

int main(){
	int n, **array, i, sum=0, j;

	scanf("%d",&n);

	array=(int **)malloc(sizeof(int *)*n);
	for(i=0;i<n;i++){
		array[i]=(int *)malloc(sizeof(int)*n);
		scanf("%d",&array[i][i]);
		sum = sum + array[i][i];
	}
	
	sum=(sum/(n*(n-1)))+1;

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i!=j){
				array[i][j]=sum;
			}
			printf("%2d ",array[i][j]);
		}
		printf("\n");
	}
	return 0;
}	
