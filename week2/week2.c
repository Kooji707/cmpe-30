#include <stdio.h>
int main() {
   
   char first_name[50];
   char last_name[50];
   printf("Enter your first name: ");
   scanf("%s",first_name);
   printf("Enter your last name: ");
   scanf("%s",last_name);
   printf("\nYour name is: %s %s\n\n",first_name,last_name);

   return 0;
}