#include<stdio.h>
#include<stdlib.h>

int main(){
	int n, i, j;

	scanf("%d",&n);
	int array[n][n], sum[n];

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&array[i][j]);
		}
	}
	
	for(i=0;i<n;i++){
		sum[i]=0;
		if(i!=0){
			sum[i]+=array[i][i-1];
			sum[i]+=array[i-1][i];
		}
		if(i!=n-1){
			sum[i]+=array[i][i+1];
			sum[i]+=array[i+1][i];
		}
		if(sum[i]!=array[i][i]){
			printf("\nno\n");
			return 1;
		}
	}
	printf("\nyes\n");
	return 0;
}	
