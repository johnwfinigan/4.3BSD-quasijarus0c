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
#	@(#)Makefile	5.2 (Berkeley) 11/18/03
#
PRINTER=-Plz
TROFF=	ditroff ${PRINTER}
EQN=	deqn ${PRINTER}
TBL=	dtbl ${PRINTER}
LPR=	lpr -n ${PRINTER}

SRC=	0.t 1.t 2.t 3.t 4.t 5.t 6.t a.t b.t c.t

setup.out: ${SRC}
	${EQN} ${SRC} | ${TBL} | ${TROFF} -t -ms > setup.out

setup.txt: ${SRC}
	neqn ${SRC} | tbl | nroff -ms | colcrt - > setup.txt

setup: setup.out
	${LPR} setup.out

clean:
	rm -f setup.out setup.txt ?.t.spell errs Errs

spell:	${SRC}
	@for i in ${SRC}; do \
		echo $$i; spell $$i | sort | comm -23 - spell.ok > $$i.spell; \
	done
