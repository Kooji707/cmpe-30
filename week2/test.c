#include <stdio.h>
#define MAX_LIMIT 40
int main()
{
   char fullName[MAX_LIMIT];
    printf("Enter your full name: ");
   fgets(fullName, MAX_LIMIT, stdin);
   printf("%s", fullName);
 
   return 0;
}