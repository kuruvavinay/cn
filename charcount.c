#include<stdio.h>
void main()
{
	char arr[50];
	int i,j,cnt=0;
	scanf("%[^\n]s",arr);
	j=0;
	for(i=0;arr[i]!='\0';i++) {
		if(arr[i] == ' ') {
			printf("%d | ",cnt);
			for(;j<i;j++) 
				putchar(arr[j]);
			printf(" | ");
			cnt = 0;
			j = i+1;
		} else if(arr[i+1] == '\0') {
			printf(" | %d | ",cnt+1);
			for(;j<=i;j++) 
				putchar(arr[j]);
		} else {
			cnt++;
		}
	}
}
