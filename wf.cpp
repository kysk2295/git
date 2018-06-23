#include<stdio.h>
int main(){
//test12
	char a[101];
	char b;
	int cnt=0;
	int i;
	
	printf("문자열 입력: ");
	gets(a);
	
	printf("찾으려는 문자 입력: ");
	scanf("%c",&b);
	
	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]==b){
			cnt++;
		}
	}
	printf("%d",cnt);

}
