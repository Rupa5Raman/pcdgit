#include<stdio.h>
#include<conio.h>
#include<math.h>
void  main()
{ 
float  n,s; int  i;
clrscr();
printf("\n  Enter  the  number  to  find  the  square  root\n");
scanf("%f",&n);
if(n>0) 
{ 
s = n/ 2; 
for(i = 0; i <n; i++)
s  =  (s  +  (n/s))/2;
printf("Square  root  of  %f  is  %f\n",n,s);
}
else
printf("\n  Not  possible  to  find  the  square  root"); 
getch();
}
