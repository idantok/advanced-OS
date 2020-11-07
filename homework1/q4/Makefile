MODULE = dModule
obj-m := ${MODULE}.o
$(MODULE)-objs := indModule.o
KDIR := /lib/modules/$(shell uname -r)/build
all:
	$(MAKE) -C $(KDIR) M=$(shell pwd) modules

clean:
	make -C $(KDIR) M=$(shell pwd) clean
