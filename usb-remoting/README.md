
Approximate development workflow:

`gcc -o libusb-1.0.so.0 -fPIC -shared -ldl libusb.c`
`LD_DEBUG=all apollo info 2> /tmp/foo`
`less /tmp/foo`

Search for libusb_ and find the next missing symbol. Implement its stub in libusb.c and repeat.

## Build

`gcc -o libusb-1.0.so.0 -fPIC -shared -ldl libusb.c`


### Configure

`export LD_LIBRARY_PATH=/workspaces/luna/usb-remoting`

## Run

`apollo info`

