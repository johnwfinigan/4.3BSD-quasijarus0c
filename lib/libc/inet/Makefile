#
# Copyright (c) 1988 Regents of the University of California.
# All rights reserved.
#
# Redistribution and use in source and binary forms are permitted
# provided that the above copyright notice and this paragraph are
# duplicated in all such forms and that any documentation,
# advertising materials, and other materials related to such
# distribution and use acknowledge that the software was developed
# by the University of California, Berkeley.  The name of the
# University may not be used to endorse or promote products derived
# from this software without specific prior written permission.
# THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
# IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
# WARRANTIES OF MERCHANTIBILITY AND FITNESS FOR A PARTICULAR PURPOSE.
#
#	@(#)Makefile	5.8 (Berkeley) 6/27/88
#
DEFS=	-DLIBC_SCCS
CFLAGS=	-O ${DEFS}
SRCS=	inet_addr.c inet_network.c inet_netof.c inet_ntoa.c inet_lnaof.c \
	inet_makeaddr.c
OBJS=	inet_addr.o inet_network.o inet_netof.o inet_ntoa.o inet_lnaof.o \
	inet_makeaddr.o
TAGSFILE=tags

.c.o:
	@${CC} -p -c ${CFLAGS} $*.c
	@-ld -X -o profiled/$*.o -r $*.o
	${CC} ${CFLAGS} -c $*.c
	@-ld -x -r $*.o
	@mv a.out $*.o

all: ${OBJS}

link: ${OBJS}
	(cd ../library; rm -f ${OBJS})
	(cd ../profiled; rm -f ${OBJS})
	ln ${OBJS} ../library
	(cd profiled; ln ${OBJS} ../../profiled)

tags:
	cwd=`pwd`; \
	for i in ${SRCS}; do \
		ctags -a -f ${TAGSFILE} $$cwd/$$i; \
	done

clean:
	rm -f *.o profiled/* a.out core ${TAGSFILE}

depend:
	mkdep ${CFLAGS} ${SRCS}

# DO NOT DELETE THIS LINE -- mkdep uses it.
# DO NOT PUT ANYTHING AFTER THIS LINE, IT WILL GO AWAY.

inet_addr.o: inet_addr.c /usr/include/sys/types.h /usr/include/ctype.h
inet_addr.o: /usr/include/netinet/in.h
inet_network.o: inet_network.c /usr/include/sys/types.h
inet_network.o: /usr/include/netinet/in.h /usr/include/ctype.h
inet_netof.o: inet_netof.c /usr/include/sys/types.h /usr/include/netinet/in.h
inet_ntoa.o: inet_ntoa.c /usr/include/sys/types.h /usr/include/netinet/in.h
inet_lnaof.o: inet_lnaof.c /usr/include/sys/types.h /usr/include/netinet/in.h
inet_makeaddr.o: inet_makeaddr.c /usr/include/sys/types.h
inet_makeaddr.o: /usr/include/netinet/in.h

# IF YOU PUT ANYTHING HERE IT WILL GO AWAY
