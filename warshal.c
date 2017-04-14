#include<stdio.h>
#define size 10 /*Defining maximum size of the matrix*/
void main()
{
int a[size][size];
int i,j,k,n;
void warshall(int[][j],int);
printf("Enter no. of vertices : ");/*Number of vertices should be less or equal to the defined size*/
scanf("%d",&n);
/*Enter 1 if ith vertex and jth vertex has directed path else enter 0*/
printf("Give the initial graph(in binary matrix form):\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("Enter the value of a[%d][%d]:",i,j);
scanf("%d",&a[i][j]);
}
}
warshall(a,n);/* Function declaration*/
printf("The final matrix where we can find the presence of directed path :\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
printf("%5d",a[i][j]);
printf("\n");
}
}
void warshall(int a[size][size],int n)/*Function definition*/
{
int k,i,j;
for(k=0;k<n;k++)/*n is the no.of vertices of the graph and k represents table no.*/
{
for(i=0;i<n;i++)/*i represents row no. within a table*/
{
for(j=0;j<n;j++)/*j represents column no. within a row*/
{
a[i][j]=a[i][j]||(a[i][k] && a[k][j]);/*Exsisting 1 entries will be kept and 0 entries may or maynot be changed*/
}
}
}
