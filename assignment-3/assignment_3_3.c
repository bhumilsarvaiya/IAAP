#include<stdio.h>
#include<stdlib.h>

int ** transpose(int **array,int *m, int *n){
	int **new,tmp,i,j;
	tmp=*m;
	*m=*n;
	*n=tmp;
	new=(int **)malloc(sizeof(int *)*(*m));
	for(i=0;i<*m;i++){
		new[i]=(int *)malloc(sizeof(int)*(*n));
		for(j=0;j<*n;j++){
			new[i][j]=array[j][i];
		}
	}
	return new;
}

int main(){
	int m, n, **array, i, sum=0, j, **transpose_array;

	scanf("%d %d",&m,&n);

	array=(int **)malloc(sizeof(int*)*m);
	for(i=0;i<m;i++){
		array[i]=(int *)malloc(sizeof(int)*n);
		for(j=0;j<n;j++){
			scanf("%d",&array[i][j]);
		}
	}
	
	printf("\n");
	
	transpose_array=transpose(array,&m,&n);	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",transpose_array[i][j]);
		}
		printf("\n");
	}
	return 0;
}	
