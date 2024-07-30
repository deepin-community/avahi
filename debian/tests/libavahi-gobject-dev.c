#include <avahi-gobject/ga-error.h>

#include <stdio.h>

int
main (void)
{
  printf ("GA_ERROR -> %s\n", g_quark_to_string (GA_ERROR));
  return 0;
}
