/*
 * Copyright (c) 1988 Regents of the University of California.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms are permitted
 * provided that the above copyright notice and this paragraph are
 * duplicated in all such forms and that any documentation,
 * advertising materials, and other materials related to such
 * distribution and use acknowledge that the software was developed
 * by the University of California, Berkeley.  The name of the
 * University may not be used to endorse or promote products derived
 * from this software without specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTIBILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 *
 * This code is derived from software contributed to Berkeley by
 * Computer Consoles Inc.
 */

#if defined(LIBC_SCCS) && !defined(lint)
	.asciz "@(#)strcmp.s	1.3 (Berkeley) 6/27/88"
#endif /* LIBC_SCCS and not lint */

#include "DEFS.h"

/*
 * Compare strings:  s1>s2: >0  s1==s2: 0  s1<s2: <0
 * 
 * strcmp(s1, s2)
 * register char *s1, *s2;
*/

ENTRY(strcmp, 0)
	movl	4(fp),r0
	movl	8(fp),r1
	cmps2
	jgtr	greater
	jlss	less
equal:	clrl	r0
	ret
less:	movl	$-1,r0
	ret
greater: movl	$1,r0
	ret
