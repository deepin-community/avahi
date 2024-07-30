#include <avahi-glib/glib-watch.h>

int
main (void)
{
  avahi_glib_poll_free (avahi_glib_poll_new (NULL, G_PRIORITY_DEFAULT));
  return 0;
}
