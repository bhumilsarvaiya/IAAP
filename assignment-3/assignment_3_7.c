#include<stdio.h>
#include<string.h>

void isPalindrome(char string[],int size){
	int i;
	for(i=0;i<size/2;i++){
		if(string[i]!=string[size-(i+1)]){
			printf("no\n");
			return;
		}
	}
	printf("yes\n");
}

int main(){
	int n, i, size;
	scanf("%d\n",&n);
	char string[n][20];
	
	for(i=0;i<n;i++){
		scanf("%s",string[i]);
	}
	for(i=0;i<n;i++){
		size=strlen(string[i]);
		isPalindrome(string[i],size);	
	}
	return 0;
}
