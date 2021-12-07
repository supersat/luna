
OBJS = libusb-1.0.so.0
all: $(OBJS)

libusb-1.0.so.0: libusb.c
	$(CC) $(CFLAGS) -o $@ -fPIC -shared -ldl $<

clean:
	rm $(OBJS)