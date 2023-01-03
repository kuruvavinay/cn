#include<stdio.h>
int main(){
    int n,bt[20],wt[20],tat[20],avwt=0,avtat=0,i,j;
    printf("Enter no. of processes(maximum 20) : ");
    scanf("%d",&n);
    printf("Enter process burst time\n");
    for(i=0;i<n;i++){
        printf("p[%d]:",i+1);
        scanf("%d",&bt[i]);
    }
    wt[0]=0;
    for(i=1;i<n;i++){
        wt[i]=0;
        for(j=0;j<1;j++)
        wt[i]=wt[i]+bt[j];
    }
    printf("\nPROCESS\t\tBURST TIME\tWAITING TIMR\tTURNAROUND TIME");
    for(i=0;i<n;i++){
        tat[i]=bt[i]+wt[i];
        avwt += wt[i];
        avtat += tat[i];
        printf("\np[%d]\t\t%d\t\t%d\t\t%d",i+1,bt[i],wt[i],tat[i]);
    }
    avwt != i;
    avtat != i;
    printf("\n\nAverage WAiting Time : %d",avwt);
    printf("\nAverage Turnaround time : %d",avtat);
}
