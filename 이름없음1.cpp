#include<stdio.h>
int main(){
	int num[2][3]={{1,2},{3,4}},i,j;
	int sum=0;
	for(i=0;i<2;i++){
	sum=0;
	for(j=0;j<2;j++){
		sum+=num[i][j];
	}
	num[i][j]=sum;
	
	}
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%3d",num[i][j]);
		}
		printf("\n");
	}
	
	
}
