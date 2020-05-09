#include <stdio.h>

int main()
{
    int num;
 printf("Enter the number:");
 scanf("%d",&num);
 switch(num)
 {
     case 1: printf("Food Item-Biriyani\n");
     printf("Price-Rs.100");
     break;
     case 2: printf("Food Item- Chicken Fried Rice\n");
     printf("Price-Rs.90");
     break;
     case 3: printf("Food Item-Jumbo PaaniPuri\n");
     printf("Price-Rs.50");
     break;
     case 4: printf("Food Item-Brinji\n");
     printf("Price-Rs.75");
     break;
     case 5: printf("Food Item-Paper Dosa\n");
     printf("Price-Rs.150");
     break;
     default: 
     printf("Enter the number between 1to 5");
 }
 return 0;
}
