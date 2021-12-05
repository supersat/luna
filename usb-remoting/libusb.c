#include "libusb.h"
#include <stdio.h>

#define __USE_GNU

#include <dlfcn.h>

int LIBUSB_CALL libusb_init(libusb_context **ctx) {
    printf("libusb_init\n");
    return ((int LIBUSB_CALL (*)(libusb_context **))(dlsym(RTLD_NEXT, "libusb_init")))(ctx);
}

void LIBUSB_CALL libusb_exit(libusb_context *ctx) {
    printf("libusb_exit\n");
    ((void LIBUSB_CALL (*)(libusb_context *))(dlsym(RTLD_NEXT, "libusb_exit")))(ctx);
}

void LIBUSB_CALL libusb_set_debug(libusb_context *ctx, int level) {
    printf("libusb_set_debug\n");
    ((void LIBUSB_CALL (*)(libusb_context *, int))(dlsym(RTLD_NEXT, "libusb_set_debug")))(ctx, level);
}

ssize_t LIBUSB_CALL libusb_get_device_list(libusb_context *ctx,
	libusb_device ***list) {
    printf("libusb_get_device_list\n");
    return ((ssize_t LIBUSB_CALL (*)(libusb_context *, libusb_device ***))(dlsym(RTLD_NEXT, "libusb_get_device_list")))(ctx, list);
}

libusb_device * LIBUSB_CALL libusb_get_parent(libusb_device *dev) {
    printf("libusb_get_parent\n");
    return ((libusb_device * LIBUSB_CALL (*)(libusb_device *))(dlsym(RTLD_NEXT, "libusb_get_parent")))(dev);
}

void LIBUSB_CALL libusb_free_device_list(libusb_device **list,
	int unref_devices) {
    printf("libusb_free_device_list\n");
    ((void LIBUSB_CALL (*)(libusb_device **, int))(dlsym(RTLD_NEXT, "libusb_free_device_list")))(list, unref_devices);
}

libusb_device * LIBUSB_CALL libusb_ref_device(libusb_device *dev) {
    printf("libusb_ref_device\n");
    return ((libusb_device * LIBUSB_CALL (*)(libusb_device *))(dlsym(RTLD_NEXT, "libusb_ref_device")))(dev);
}

void LIBUSB_CALL libusb_unref_device(libusb_device *dev) {
    printf("libusb_unref_device\n");
    ((void LIBUSB_CALL (*)(libusb_device *))(dlsym(RTLD_NEXT, "libusb_unref_device")))(dev);
}

int LIBUSB_CALL libusb_open(libusb_device *dev, libusb_device_handle **dev_handle) {
    printf("libusb_open\n");
    return ((int LIBUSB_CALL (*)(libusb_device *, libusb_device_handle **))(dlsym(RTLD_NEXT, "libusb_open")))(dev, dev_handle);
}

void LIBUSB_CALL libusb_close(libusb_device_handle *dev_handle) {
    printf("libusb_close\n");
     ((void LIBUSB_CALL (*)(libusb_device_handle *))(dlsym(RTLD_NEXT, "libusb_close")))(dev_handle);
}

int LIBUSB_CALL libusb_set_configuration(libusb_device_handle *dev_handle,
	int configuration) {
    printf("libusb_set_configuration\n");
    return ((int LIBUSB_CALL (*)(libusb_device_handle *, int))(dlsym(RTLD_NEXT, "libusb_set_configuration")))(dev_handle, configuration);
}

int LIBUSB_CALL libusb_get_configuration(libusb_device_handle *dev,
	int *config) {
    printf("libusb_get_configuration\n");
    return ((int LIBUSB_CALL (*)(libusb_device_handle *, int *))(dlsym(RTLD_NEXT, "libusb_get_configuration")))(dev, config);
}

int LIBUSB_CALL libusb_claim_interface(libusb_device_handle *dev_handle,
	int interface_number) {
    printf("libusb_claim_interface\n");
    return ((int LIBUSB_CALL (*)(libusb_device_handle *, int))(dlsym(RTLD_NEXT, "libusb_claim_interface")))(dev_handle, interface_number);
}

int LIBUSB_CALL libusb_release_interface(libusb_device_handle *dev_handle,
	int interface_number) {
    printf("libusb_release_interface\n");
    return ((int LIBUSB_CALL (*)(libusb_device_handle *, int))(dlsym(RTLD_NEXT, "libusb_release_interface")))(dev_handle, interface_number);
}

int LIBUSB_CALL libusb_set_interface_alt_setting(libusb_device_handle *dev_handle,
	int interface_number, int alternate_setting) {
    printf("libusb_set_interface_alt_setting\n");
    return ((int LIBUSB_CALL (*)(libusb_device_handle *, int, int))(dlsym(RTLD_NEXT, "libusb_release_interface")))(dev_handle, interface_number, alternate_setting);
}