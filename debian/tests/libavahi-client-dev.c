#include <avahi-client/client.h>

#include <stdio.h>

int
main (void)
{
  printf ("avahi_nss_support() -> %d\n", avahi_nss_support ());
  return 0;
}
