#include<stdio.h>
#include<stdlib.h>

int main(){
	int n, i, sum=0, j, k=0, tmp;

	scanf("%d",&n);
	int array[n][n], sorted_rows[n][n], sorted_cols[n][n], sorted_sequence[n*n];

	for(i=0;i<n;i++){
		for(j=0;j<n;j++,k++){
			scanf("%d",&array[i][j]);
			tmp=k;
			if(tmp!=0){
				while((tmp>0)&&(array[i][j]<sorted_sequence[tmp-1])){
					sorted_sequence[tmp]=sorted_sequence[tmp-1];
					tmp--;
				}
			}
			sorted_sequence[tmp]=array[i][j];
			tmp=j;
			if(tmp!=0){
				while((tmp>0)&&(array[i][j]<sorted_rows[i][tmp-1])){
					sorted_rows[i][tmp]=sorted_rows[i][tmp-1];
					tmp--;
				}	
			}
			sorted_rows[i][tmp]=array[i][j];
			tmp=i;
			if(tmp!=0){
				while((tmp>0)&&(array[i][j]<sorted_cols[tmp-1][j])){
					sorted_cols[tmp][j]=sorted_cols[tmp-1][j];
					tmp--;
				}
			}
			sorted_cols[tmp][j]=array[i][j];
		}
	}

	printf("\nAlong rows:\n");
	for(i=0;i<n;i++){
		printf("%d ",sorted_rows[i][0]);
		for(j=1;j<n;j++){
			if(sorted_rows[i][j]!=sorted_rows[i][j-1]){
				printf("%d ",sorted_rows[i][j]);
			}
		}
		printf("\n");
	}
	
	printf("\nAlong columns:\n");
	for(j=0;j<n;j++){
		printf("%d ",sorted_cols[0][j]);
		for(i=1;i<n;i++){
			if(sorted_cols[i][j]!=sorted_cols[i-1][j]){
				printf("%d ",sorted_cols[i][j]);
			}
		}
		printf("\n");
	}

	printf("\nMatrix:\n");

	printf("%d ",sorted_sequence[0]);
	for(i=1;i<n*n;i++){
		if(sorted_sequence[i]!=sorted_sequence[i-1]){
			printf("%d ",sorted_sequence[i]);
		}
	}
	printf("\n");
	return 0;
}	
