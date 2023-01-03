#include<stdio.h>
void main()
{
	int a[5][5],path[5][5],min,i,j,index;
	int ed=5,st=1,p;
	int edp,stp,t[5];
	printf("Enter cost matrix : ");
	for(i=1;i<=5;i++) {
		for(j=1;j<=5;j++) {
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter number of paths : ");
	scanf("%d",&p);
	printf("Enter the possible paths : ");
	for(i=1;i<=p;i++) {
		for(j=1;j<=5;j++) {
			scanf("%d",&path[i][j]);
		}
	}
	for(i=1;i<=p;i++) {
		t[i] = 0;
		stp = st;
		for(j=1;j<=5;j++) {
			edp = path[i][j+1];
			t[i] += a[stp][edp];
			if(edp == ed)
				break;
			else
				stp = edp;
		}
	}
	min = t[st];
	index = st;
	for(i=1;i<=p;i++) {
		if(min > t[i]) {
			min = t[i];
			index = i;
		}
	}
	printf("Minimum Cost is : %d\n",min);
	printf("Minimum Cost Path is : ");
	for(i=1;i<=5;i++) {
		printf("-->%d",path[index][i]);
		if(path[index][i] == ed)
			break; 
	}
}
