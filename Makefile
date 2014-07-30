
CC	:=	gcc

CFLAGS	+=	-g -pedantic -Wall -std=gnu99

CPPFLAGS+=	-I.

LDFLAGS	:= -lm

SRCS	:=	$(wildcard *.c)


BINARY	:=	dijkstra

$(BINARY) : $(SRCS:.c=.o)
	$(LINK.c) $^  -o $@


.PHONY clean :
	-rm -f *.out *.o *.d core $(BINARY)

-include $(SRCS:.c=.d)
