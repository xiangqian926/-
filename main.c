#include<stdio.h>
#incude <string.h>

int main(int argc, char **argv)
{
char name[255], last[255];
printf("Enter your first name:");
fegets(name, 255, stdin);
first[strlen(first)-1]= '\0'; /* remove the newline at the end */

printf("Now enter your last name: "); 
gets(last); /* buffer overflow? what's that? */

printf("Hello %s %s!\n", first, last)
return 0;
}