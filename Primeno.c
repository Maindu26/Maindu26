#include<stdio.h>
#include<conio.h>
Main()
{
  Int i,n,count=0;
  Clrscr();
  Scanf("%d",&n);
  While (i<=n)
  {
    If(n÷i==0)
    {
     Count=count+1;
     }
     If(count==2)
     {
      Printf("Given number is prime number");
     }
      Else
      {
       Printf("given number is not a prime number");
      }
    Getch();
}
