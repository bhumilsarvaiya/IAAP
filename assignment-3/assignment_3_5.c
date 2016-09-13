#include<stdio.h>
#include<string.h>

void sort(char string[][20], int n){
	char current[20];
	int i, tmp;
	for(i=1;i<n;i++){
		tmp=i;
		strcpy(current, string[i]);
		while((strcmp(string[tmp-1],current)>0)&&(tmp>0)){
			strcpy(string[tmp],string[tmp-1]);	
			tmp--;
		}
		strcpy(string[tmp],current);
	}
}

void find_unique(char (*string)[20], int n){
	int i;
	printf("%s ",string[0]);
	for(i=1;i<n;i++){
		if(strcmp(string[i-1],string[i])<0){
			printf("%s ",string[i]);
		}
	}
}

int main(){
	int n, i, size;
	scanf("%d\n",&n);
	char string[n][20];
	
	for(i=0;i<n;i++){
		scanf("%s",string[i]);
	}

	sort(string, n);
	printf("\nSorted:\n");
	for(i=0;i<n;i++){
		printf("%s ",string[i]);
	}
	
	printf("\nUnique:\n");
	find_unique(string, n);

	printf("\n\n");
	return 0;
}
