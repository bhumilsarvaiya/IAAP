#include<stdio.h>

int main(){
	int n, i, j;
	scanf("%d",&n);
	int array[n][n], sum_cols[n], sum_rows[n];

	for(i=0;i<n;i++){
		sum_cols[i]=0;
		sum_rows[i]=0;
	}

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&array[i][j]);
			sum_rows[i]+=array[i][j];
			sum_cols[j]+=array[i][j];
		}
	}

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(sum_cols[j]==sum_rows[i]){
				printf("Row: %d\n",i+1);
				printf("Column: %d\n",j+1);
			}
		}
	}
	return 0;
}
