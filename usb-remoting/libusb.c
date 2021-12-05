#include "libusb.h"
#include <stdio.h>

#define __USE_GNU

#include <dlfcn.h>

int LIBUSB_CALL libusb_init(libusb_context **ctx) {
    printf("libusb_init\n");
    ((int LIBUSB_CALL (*)(libusb_context **))(dlsym(RTLD_NEXT, "libusb_init")))(ctx);

}