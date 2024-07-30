#include <avahi-ui/avahi-ui.h>

#include <stdio.h>

int
main (void)
{
  printf ("AUI_TYPE_SERVICE_DIALOG -> %s\n", g_type_name (AUI_TYPE_SERVICE_DIALOG));
  return 0;
}
