#	makefile	4.7	01/05/27
#
CFLAGS=	-O -w
LIBS=	../libpw.a ../libPW.a ../libwrt.a

all:	admin bdiff chghist comb delta get help prt rmdel sccsdiff.sh \
	what val snull cmt prs stree

admin:	admin.o ../com/comobj.a alloc.o
	$(CC) -o admin admin.o ../com/comobj.a $(LIBS) alloc.o

admin.o:	admin.c ../hdr/defines.h ../hdr/had.h
	$(CC) -c $(CFLAGS) admin.c

cmt:	cmt.o ../com/comobj.a alloc.o
	$(CC) -o cmt cmt.o ../com/comobj.a $(LIBS) alloc.o

cmt.o:	cmt.c ../hdr/defines.h ../hdr/had.h
	$(CC) -c $(CFLAGS) cmt.c

bdiff:	bdiff.o ../com/comobj.a alloc.o
	$(CC) -o bdiff bdiff.o ../com/comobj.a $(LIBS) alloc.o

bdiff.o:	bdiff.c ../hdr/defines.h ../hdr/had.h
	$(CC) -c $(CFLAGS) bdiff.c

comb:	comb.o ../com/comobj.a alloc.o
	$(CC) -o comb comb.o ../com/comobj.a $(LIBS) alloc.o

comb.o:		comb.c ../hdr/defines.h ../hdr/had.h
	$(CC) -c $(CFLAGS) comb.c

scv:	scv.o ../com/comobj.a alloc.o
	$(CC) -o scv scv.o ../com/comobj.a $(LIBS) alloc.o

scv.o:		scv.c ../hdr/defines.h ../hdr/had.h
	$(CC) -c $(CFLAGS) scv.c

snull:	snull.o ../com/comobj.a alloc.o
	$(CC) -o snull snull.o ../com/comobj.a $(LIBS) alloc.o

snull.o:		snull.c ../hdr/defines.h ../hdr/had.h
	$(CC) -c $(CFLAGS) snull.c

stree:	stree.o ../com/comobj.a alloc.o
	$(CC) -o stree stree.o ../com/comobj.a $(LIBS) alloc.o

stree.o:		stree.c ../hdr/defines.h ../hdr/had.h
	$(CC) -c $(CFLAGS) stree.c

delta:	delta.o ../com/comobj.a alloc.o
	$(CC) -o delta delta.o ../com/comobj.a $(LIBS) alloc.o

delta.o:	delta.c ../hdr/defines.h ../hdr/had.h
	$(CC) -c $(CFLAGS) -DLOGDELTA delta.c

get:	get.o ../com/comobj.a alloc.o
	$(CC) -o get get.o ../com/comobj.a $(LIBS) alloc.o

get.o:		get.c ../hdr/defines.h ../hdr/had.h
	$(CC) -c $(CFLAGS) get.c

help:	help.o ../com/comobj.a alloc.o
	$(CC) -o help help.o ../com/comobj.a $(LIBS) alloc.o

help.o:		help.c ../hdr/defines.h ../hdr/had.h
	$(CC) -c $(CFLAGS) help.c

prt:	prt.o ../com/comobj.a alloc.o
	$(CC) -o prt prt.o ../com/comobj.a $(LIBS) alloc.o

prt.o:		prt.c ../hdr/defines.h ../hdr/had.h
	$(CC) -c $(CFLAGS) prt.c

prs:	prs.o ../com/comobj.a alloc.o
	$(CC) -o prs prs.o ../com/comobj.a $(LIBS) alloc.o

prs.o:		prs.c ../hdr/defines.h ../hdr/had.h
	$(CC) -c $(CFLAGS) prs.c

chghist:	rmchg
	-rm -f chghist
	ln rmchg chghist

rmdel:	rmchg
	-rm -f rmdel
	ln rmchg rmdel

rmchg:	rmchg.o ../com/comobj.a alloc.o
	$(CC) -o rmchg rmchg.o ../com/comobj.a $(LIBS) alloc.o

rmchg.o:	rmchg.c ../hdr/defines.h ../hdr/had.h
	$(CC) -c $(CFLAGS) rmchg.c

what:	what.o ../com/comobj.a alloc.o
	$(CC) -o what what.o ../com/comobj.a $(LIBS) $(LIBES) alloc.o

what.o:		what.c ../hdr/defines.h ../hdr/had.h
	$(CC) -c $(CFLAGS) what.c

val:	val.o ../com/comobj.a alloc.o
	$(CC) -o val val.o ../com/comobj.a $(LIBS) $(LIBES) alloc.o

val.o:	val.c ../hdr/defines.h ../hdr/had.h
	$(CC) -c $(CFLAGS) val.c

../com/comobj.a:
	chdir ../com; make comobj.a

clean:
	rm -f *.o
	rm -f admin bdiff chghist comb scv delta get help prt rmdel \
	    what val snull cmt rmchg prs stree

install: all
	install -s admin ${DESTDIR}/usr/bin
	install -s bdiff ${DESTDIR}/usr/bin
	install -s chghist ${DESTDIR}/usr/bin
	rm -f ${DESTDIR}/usr/bin/rmdel ${DESTDIR}/usr/bin/rmchg
	ln ${DESTDIR}/usr/bin/chghist ${DESTDIR}/usr/bin/rmchg
	ln ${DESTDIR}/usr/bin/chghist ${DESTDIR}/usr/bin/rmdel
	install -s comb ${DESTDIR}/usr/bin
	install -s delta ${DESTDIR}/usr/bin
	install -s help ${DESTDIR}/usr/bin/sccshelp
	install -s prt ${DESTDIR}/usr/bin
	install -s prs ${DESTDIR}/usr/bin
	install -c sccsdiff.sh ${DESTDIR}/usr/bin/sccsdiff
	install -s what ${DESTDIR}/usr/bin
	install -s val ${DESTDIR}/usr/bin
	install -s snull ${DESTDIR}/usr/bin
	install -s stree ${DESTDIR}/usr/bin
	install -s get ${DESTDIR}/usr/bin
#	install -s scv ${DESTDIR}/usr/bin
	install -s cmt ${DESTDIR}/usr/bin
