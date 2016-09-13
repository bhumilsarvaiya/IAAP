#include<stdio.h>
#include<stdlib.h>

int main(){
	int n, **array, i, sum=0, j, max=0, max_i;

	scanf("%d",&n);

	array=(int **)malloc(sizeof(int*)*n);
	for(i=0;i<n;i++){
		array[i]=(int *)malloc(sizeof(int)*n);
		for(j=0;j<n;j++){
			scanf("%d",&array[i][j]);
		}
	}
	
	for(i=0;i<n;i++){
		if(i!=0){
			sum+=array[i-1][i-1];
			sum+=array[i][i-1];
			sum+=array[i-1][i];
		}
		if(i!=n-1){
			sum+=array[i+1][i+1];
			sum+=array[i][i+1];
			sum+=array[i+1][i];
		}
		if((i!=0)&&(i!=n-1)){
			sum+=array[i+1][i-1];
			sum+=array[i-1][i+1];
		}
		if(max<sum){
			max=sum;
			max_i=i+1;
		}
		printf("%d : %d\n",array[i][i],sum);
		sum=0;
	}
	printf("index: %d\n",max_i);
	return 0;
}	
