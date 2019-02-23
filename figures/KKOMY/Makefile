CC            = CC 
LIBDIR        = $(HOME)/wybo/lib/sun
DEBUG	      = -g
CFLAGS        = $(DEBUG) -I$(LIBDIR)
EXTHDRS	      = $(LIBDIR)/wybo.h 
HDRS	      =
LDFLAGS	      = $(DEBUG)
LIB	      = $(LIBDIR)/libwybo.a
EXTLIB	      = -lcomplex -lM77 -lF77 -limsl20 -lm -cg89
LINKER	      = CC
FF	      = CC
PROGRAM	      = a.out
OBJS	      = $(PROGRAM).o

KKOMY.data: k0
	KKOMY 0.0 4.0 0.01 > KKOMY.data

all: k0 

include makefile.inc
