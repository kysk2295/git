#include<stdio.h>
int main(){
//test14
	char a[101];
	char b;
	int cnt=0;
	int i;
	int x;
	
	printf("문자열 입력: ");
	gets(a);
	
	
	for(i=0;a[i]!=NULL;i++)
	{
		cnt++;
	}
	
	for(x=cnt-1;x>=0;x--){
		printf("%c",a[x]);
	}

}
