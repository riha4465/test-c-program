
#include<stdio.h>
void printArray(int array[], int size)
{
int i;
for(i=0;i<size;i++)
printf("%d ",array[i]);
printf("\n");
}
void bubbleSort(int array[], int size)
{
int i,j;
for(i=0;i<size-1;i++)
{
for(j=0;j<size-1-i;j++)
{
if(array[j]>array[j+1])
{
int temp=array[j];
array[j]=array[j+1];
array[j+1]=temp;
}
}
}
}
int main()
{
int size,array[100],i;
scanf("%d",&size);
for(i=0;i<size;i++)
scanf("%d",&array[i]);
printf("Before Sorting: \n");
printArray(array,size);
bubbleSort(array,size);
printf("After Sorting: \n");
printArray(array,size);
return 0;
}
