/* test.c */
#include <unistd.h>
 
int main(int argc, char *argv[])
{
char buff[100];

if(argc <2)
{
   printf("Syntax: %s <input string>\n", argv[0]);
   exit (0);
     }
  strcpy(buff, argv[1]);
  return 0;
}
