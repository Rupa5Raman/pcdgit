#include<stdio.h>
#include<conio.h>
#include<math.h>
  main()
  {
  float a,b,c;
  float root1, root2, realp, imgp, disc;
  clrscr();
  printf(“\n C program to find and output all the roots of a given quadratic equation“);
  printf(“\n for non-zero coefficients”);
  printf("\n\n  Enter the value of coefficient of a");
  scanf("%f", &a); 
  if(a == 0) 
  {
  printf(“\n Invalid input…Retry again”);
  getch();
  exit(0);
  }   
  printf("\n Enter the value of coefficient  b  ");
  scanf("%f", &b);
  printf("\n Enter the value of coefficient  c  "); 
  scanf("%f", &c); 
  disc = b*b-4*a*c;
   if(disc == 0) 
   {  
   printf("\n\n The roots are equal…"); 
   root1 = root2 = -b / (2.0*a);  
   printf("\n Root1 = Root2 = %.2f", root1);
   } 
    else  if(disc > 0) 
    {
    printf("\n\n The roots are real and distinct…");
    root1 = (-b + sqrt(disc))/(2.0*a); 
    root2 = (-b - sqrt(disc))/(2.0*a);
    printf("\nRoot1 = %.2f", root1);  
    printf("\nRoot2 = %.2f", root2); 
    } 
    else     {     printf("\n\n The roots are imaginary…"); 
    realp = -b/(2.0*a);  
    imgp = sqrt(fabs(disc))/(2.0*a);
    printf("\nRoot1 = %.2f + i %.2f",realp, imgp); 
    printf("\nRoot2 = %.2f - i %.2f",realp, imgp); 
    } 
    getch(); 
    } 
