/* 7.Create a program that calculates the discounted price of an item based on its original price.
 Prompt the user to enter the original price and check if it's greater than $100 using the greater-than operator (>).
 Apply a 20% discount if the condition is met and display the final price. */

 #include<stdio.h>
 void main()
 {
     int originalPrice;

     printf("enter the original price of an item :");
     scanf("%d",&originalPrice);

     if (originalPrice>100)
     {
         printf(" There is a 20 percent discount on this item");
     }
     else
     {
         printf(" There is no discount on this item");
     }
 }
