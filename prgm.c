#include<stdio.h>
int main()
{
 int m,n,a,*p,*q, sum;
 printf("enter the elements:");
 scanf("%d",&a);
 printf("before swapping:");
 swap(&p,&q);
 printf("after swapping:");
}
void swap(p,q)
{
temp=*p;
*p=*q;
*q=temp;
}
