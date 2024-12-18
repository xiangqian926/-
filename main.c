#incude <stdio.h>
#incude <string.h>

int main(int argc, char **argv)
{
char name[255];

printf("Enter your name:");
fegets(name, 255, stdin)
printf("length = %d\n", strlen(name)); /* debug line */
name[strlen(name)-1] = '\0'; /* remove the newline at the end */

printf("Hello %!\n", name)
return 0;
}