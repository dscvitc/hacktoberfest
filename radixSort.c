#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
void radixSort(int *,int,int);
int main()
{
int *array,e,size,i;
printf("Enter size of Array: ");
scanf("%d",&size);
array=(int *)malloc(sizeof(int)*size);
printf("Enter elements of array to be sorted:\n");
for(e=0;e<=size-1;e++) 
{
scanf("%d",&i);
array[e]=i;
}
radixSort(arary,0,size-1);
printf("Sorted array:\n");
for(e=0;e<=size-1;e++) printf("%d\n",array[e]);
free(array);
return 0;
}
void radixSort(int *x,int lowerBound,int upperBound)
{
int i,j,y,d,dc,largest,num,sizeOfArray,e,f;
int * queue[10];
int front[10]={0,0,0,0,0,0,0,0,0,0};
int rear[10]={0,0,0,0,0,0,0,0,0,0};
sizeOfArray=(upperBound-lowerBound+1);
// code to allocate sufficient space for 10 queues (worst possible case is size of array)
for(i=0;i<=9;i++) queue[i]=(int *)malloc(sizeof(int)*sizeOfArray);
for(largest=x[lowerBound],y=lowerBound+1;y<=upperBound;y++) if(x[y]>largest) largest=x[y];
dc=1;
num=largest;
while(num>9)
{
num=num/10;
dc++;
}
e=1;
f=10;
j=1;
while(j<=dc)
{
y=lowerBound;
while(y<=upperBound)
{
num=x[y];
d=(num%f)/e;
queue[d][rear[d]]=num;
rear[d]++;
y++;
}
i=0;
for(y=0;y<=9;y++)
{
while(rear[y]!=0)
{
x[i]=queue[y][front[y]];
front[y]++;
if(front[y]==rear[y])
{
front[y]=0;
rear[y]=0;
}
i++;
}
}
e=e*10;
f=f*10;
j++;
}
// code to release all strips
for(i=0;i<=9;i++) free(queue[i]);
}
