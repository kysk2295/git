#include<stdio.h>
//test16
int main(){
	char c[101];
	int cnt1=0;
	int cnt2=0;
	
	printf("암호입력: ");
	gets(c);
	
	for(int x=0;c[x]!=NULL;x++){
		if(c[x]=='c'||c[x]=='C'){
			cnt1++;
			if(c[x+1]=='c'||c[x+1]=='C'){
				cnt2++;
			}
		}
		
	}
	printf("%d\n%d",cnt1,cnt2);
} 
