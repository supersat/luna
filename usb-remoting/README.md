

## Build

`gcc -shared -o libusbshim.so libusb.c`


### Configure

`export LD_PRELOAD=/workspaces/luna/usb-remoting/libusbshim.so`

## Run

`apollo info`

