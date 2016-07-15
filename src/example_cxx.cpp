extern "C" {
#include "mtev_capabilities_listener.h"
}
#include <stdio.h>

static class initer_c {
public:
  initer_c() {
    mtev_capabilities_init_globals();
  }
} _initer;
