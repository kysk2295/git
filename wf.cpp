#include<stdio.h>
int main(){
//test12
	char a[101];
	char b;
	int cnt=0;
	int i;
	
	printf("���ڿ� �Է�: ");
	gets(a);
	
	printf("ã������ ���� �Է�: ");
	scanf("%c",&b);
	
	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]==b){
			cnt++;
		}
	}
	printf("%d",cnt);

}
