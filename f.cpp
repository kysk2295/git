#include<stdio.h>
int main(){
//test14
	char a[101];
	char b;
	int cnt=0;
	int i;
	int x;
	
	printf("���ڿ� �Է�: ");
	gets(a);
	
	
	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]<'a')
		printf("%c",a[i]+32);
		else
		printf("%c",a[i]-32);
	}
	


}
