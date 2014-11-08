#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int
main (int argc, char **argv)
{
  int aflag = 0;
  int bflag = 0;
  char *cvalue = NULL;
  int index;
  int c;

  opterr = 0;
  while ((c = getopt (argc, argv, "p:r:")) != -1)
    switch (c)
      {
      case 'p':
        aflag = 1;
        break;
      case 'r':
        bflag = 1;
        break;
      default:
        abort ();
      }
  printf ("CR = %d,  = %d",
          aflag, bflag);

  for (index = optind; index < argc; index++)
    printf ("Non-option argument %s\n", argv[index]);
  return 0;
}
