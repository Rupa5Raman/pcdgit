 #include<stdio.h>
#include<conio.h>
 main()
 {      int num, temp, rev=0, digit; 
  clrscr();
 printf(“\n C program to reverse a given integer number and check whether it is a”);
  printf(“\n palindrome or not.  Output the given number with suitable message”); 
  printf("\n\n  Enter a valid integer number  ");  
  scanf("%d",&num); 
  temp = num; 
  while(num != 0) 
  {     
    digit = num % 10; 
    rev = rev * 10 + digit;
    num = num / 10;      
  }   
  printf(“\n\n The reversed number of  %d is = %d”,temp,rev); 
   if(temp == rev)   
     printf("\n The number is palindrome\n"); 
  else  
    printf("\n The number is not palindrome\n");    
  getch();
 }
