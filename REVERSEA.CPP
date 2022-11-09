#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int r,t,j,a[10]={0,1,2,3,4,5,6,7,8,9};
 for (r=9,j=0;r>=5,j<=4;r=r-1,j=j+1)
 {
  t=a[r];
  a[r]=a[j];
  a[j]=t;
 }
 for (r=0;r<=9;r=r+1)
 {
  printf(" %d",a[r]);
 }
  getch();

}