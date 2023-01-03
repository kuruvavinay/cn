#include<stdio.h>
void main()
{
	int n,arr[20],b[30],cnt;
	int i,j,k;
	printf("Enter the frame size : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	i=0;
	j=0;
	while(i < n) {
		if(arr[i] == 1) {
			b[j] = arr[i];
			cnt = 1;
			for(k=i+1;arr[k]==1 && k<n && cnt<5;k++) {
				b[++j] = arr[k];
				cnt++;
				if(cnt == 5) {
					b[++j] = 0; 
				}
				i = k;
			}
		} else {
			b[j] = arr[i];
		}
		i++;
		j++;
	}
	printf("After Bit Stuffing : ");
	for(i=0;i<j;i++) 
		printf("%d",b[i]);
}
