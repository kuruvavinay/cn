#include<stdio.h>
#include<string.h>
void main()
{
	int i,j,lg,lm;
	char m[100],g[30],gl[30],temp[30],q[100],r[30];
	printf("Enter m(x) data in binary form : ");
	gets(m);
	printf("Enter g(x) data in binary form : ");
	gets(g);
	lg = strlen(g);
	lm = strlen(m);
	strcpy(gl,g);
	for(i=0;i<lg-1;i++)
		m[lm+i] = '0';
	for(i=0;i<lg;i++)
		temp[i] = m[i];
	for(i=0;i<lm;i++) {
		q[i] = temp[0];
		if(q[i] == '0'){
			for(j=0;j<lg;j++) 
				g[j] = '0';
		} else {
			for(j=0;j<lg;j++) 
				g[j] = gl[j];
		}
		for(j=lg-1;j>0;j--) {
			if(g[j] == temp[j])
				r[j-1] = '0';
			else
				r[j-1] = '1';
		}
		r[lg-1] = m[i+lg];
		strcpy(temp,r);
	}
	strcpy(r,temp);
	printf("Quotient is : ");
	for(i=0;i<lm;i++)
		printf("%c",q[i]);
	printf("\nRemainder is : ");
	for(i=0;i<lg-1;i++) 
		printf("%c",r[i]);
	printf("\nM(x) + T(x) is : ");
	for(i=0;i<lm;i++)
		printf("%c",m[i]);
	for(i=0;i<lg-1;i++) 
		printf("%c",r[i]);
}
