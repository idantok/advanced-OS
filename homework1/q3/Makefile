MODULE = hellomodule
obj-m := ${MODULE}.o
$(MODULE)-objs := moduleA.o moduleB.o
KDIR := /lib/modules/$(shell uname -r)/build
all:
	$(MAKE) -C $(KDIR) M=$(shell pwd) modules

clean:
	make -C $(KDIR) M=$(shell pwd) clean
