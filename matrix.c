#include<stdio.h>
int main()
{
int m,n,i,j,k;
printf("Enter the number of rows and columns of the matrices:");
scanf("%d%d",&m,&n);
int A[m][n],B[m][n],Sum[m][n],Sub[m][n],Mul[m][n];

printf("Enter the elements of matrix A");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&A[i][j]);
}
}

printf("Enter elements of matrix B");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&B[i][j]);
}
}

for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
Sum[i][j]=A[i][j]+B[i][j];
}
}

for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
Sub[i][j]=A[i][j]-B[i][j];
}
}

if(m==n)
{
for(i=0;i<m;i++)
{

for(j=0;j<n;j++)
{
Mul[i][j]=0;
for(k=0;k<n;k++)
{
Mul[i][j]=A[i][j]*B[i][j];
}
}
}
}
printf("\nMatrix Addition:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d",Sum[i][j]);
printf("\n");
}
}
printf("\nMatrix Subtraction:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d",Sub[i][j]);
printf("\n");
}
}
if(m==n)
{
printf("\nMatrix Multiplication:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d",Mul[i][j]);
printf("\n");
}
}
}
else
{
printf("\nMatrix multiplicationj is not possible\n");
}
return 0;
}



