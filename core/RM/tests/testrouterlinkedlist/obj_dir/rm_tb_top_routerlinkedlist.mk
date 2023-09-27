# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f rm_tb_top_routerlinkedlist.mk

default: rm_tb_top_routerlinkedlist

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /home/yasas/utils/verilator-5.008-patched
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = rm_tb_top_routerlinkedlist
# Module prefix (from --prefix)
VM_MODPREFIX = rm_tb_top_routerlinkedlist
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	tb_top_routerlinkedlist \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	. \


### Default rules...
# Include list of all generated classes
include rm_tb_top_routerlinkedlist_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

VASIM=/home/yasas/Research/RTLruntimemonitor/FPGA/verification/VASimt
MNRL=$(VASIM)/libs/MNRL/C++
LIBMNRL=$(MNRL)/libmnrl.a
PUGI=$(VASIM)/libs/pugixml/src
LIBVASIM=$(VASIM)/libvasim.a
IDIRS=-I$(VASIM)/include -I$(MNRL)/include -I$(PUGI) -I.
LANEOBJ=../../cpp_model/lane.o
ROUTOBJ=../router.o


tb_top_routerlinkedlist.o: ./tb_top_routerlinkedlist.cpp
	$(OBJCACHE) $(CXX) $(IDIRS) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $< $(LIBVASIM) $(LIBMNRL) $(LANEOBJ) $(ROUTOBJ)

### Link rules... (from --exe)
rm_tb_top_routerlinkedlist: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) $(LANEOBJ) $(ROUTOBJ) $(LIBVASIM) $(LIBMNRL) -o $@


# Verilated -*- Makefile -*-
