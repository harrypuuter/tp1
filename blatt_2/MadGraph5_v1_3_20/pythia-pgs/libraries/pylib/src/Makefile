SRCS := $(wildcard *.f)
OBJS = ${SRCS:.f=.o}

FF = $(FC)
ifeq "$(FC)" ""
	FF = g77
endif

FFOPTS = -O1 -fno-automatic 


.f.o:
	$(FF) $(FFOPTS) -c $<

all: ../lib/libpythiaext.a

../lib/libpythiaext.a: ${OBJS}
	ar rcu ../lib/libpythiaext.a ${OBJS}
	ranlib ../lib/libpythiaext.a 