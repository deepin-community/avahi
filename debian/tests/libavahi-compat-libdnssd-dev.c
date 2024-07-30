#include <dns_sd.h>

#include <stddef.h>

int
main (void)
{
  TXTRecordRef ref;
  TXTRecordCreate (&ref, 42, NULL);
  TXTRecordDeallocate (&ref);
  return 0;
}
