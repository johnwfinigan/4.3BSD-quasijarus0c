/*
 * Copyright (c) 1983 Regents of the University of California.
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
 */

#ifndef lint
static char sccsid[] = "@(#)cmd1.c	3.33 (Berkeley) 6/29/88";
#endif /* not lint */

#include "defs.h"
#include "char.h"

c_window()
{
	int col, row, xcol, xrow;
	int id;

	if ((id = findid()) < 0)
		return;
	if (!terse)
		wwputs("New window (upper left corner): ", cmdwin);
	col = 0;
	row = 1;
	wwadd(boxwin, framewin->ww_back);
	for (;;) {
		wwbox(boxwin, row - 1, col - 1, 3, 3);
		wwsetcursor(row, col);
		while (wwpeekc() < 0)
			wwiomux();
		switch (getpos(&row, &col, row > 1, 0,
			wwnrow - 1, wwncol - 1)) {
		case 3:
			wwunbox(boxwin);
			wwdelete(boxwin);
			return;
		case 2:
			wwunbox(boxwin);
			break;
		case 1:
			wwunbox(boxwin);
		case 0:
			continue;
		}
		break;
	}
	if (!terse)
		wwputs("\nNew window (lower right corner): ", cmdwin);
	xcol = col;
	xrow = row;
	for (;;) {
		wwbox(boxwin, row - 1, col - 1,
			xrow - row + 3, xcol - col + 3);
		wwsetcursor(xrow, xcol);
		wwflush();
		while (wwpeekc() < 0)
			wwiomux();
		switch (getpos(&xrow, &xcol, row, col, wwnrow - 1, wwncol - 1))
		{
		case 3:
			wwunbox(boxwin);
			wwdelete(boxwin);
			return;
		case 2:
			wwunbox(boxwin);
			break;
		case 1:
			wwunbox(boxwin);
		case 0:
			continue;
		}
		break;
	}
	wwdelete(boxwin);
	if (!terse)
		wwputc('\n', cmdwin);
	wwcurtowin(cmdwin);
	(void) openwin(id, row, col, xrow-row+1, xcol-col+1, nbufline,
		(char *) 0, 1, 1, shellfile, shell);
}

getpos(row, col, minrow, mincol, maxrow, maxcol)
register int *row, *col;
int minrow, mincol;
int maxrow, maxcol;
{
	static int scount;
	int count;
	char c;
	int oldrow = *row, oldcol = *col;

	while ((c = wwgetc()) >= 0) {
		switch (c) {
		case '0': case '1': case '2': case '3': case '4':
		case '5': case '6': case '7': case '8': case '9':
			scount = scount * 10 + c - '0';
			continue;
		}
		count = scount ? scount : 1;
		scount = 0;
		switch (c) {
		case 'h':
			if ((*col -= count) < mincol)
				*col = mincol;
			break;
		case 'H':
			*col = mincol;
			break;
		case 'l':
			if ((*col += count) > maxcol)
				*col = maxcol;
			break;
		case 'L':
			*col = maxcol;
			break;
		case 'j':
			if ((*row += count) > maxrow)
				*row = maxrow;
			break;
		case 'J':
			*row = maxrow;
			break;
		case 'k':
			if ((*row -= count) < minrow)
				*row = minrow;
			break;
		case 'K':
			*row = minrow;
			break;
		case ctrl('['):
			if (!terse)
				wwputs("\nCancelled.  ", cmdwin);
			return 3;
		case '\r':
			return 2;
		default:
			if (!terse)
				wwputs("\nType [hjklHJKL] to move, return to enter position, escape to cancel.", cmdwin);
			wwbell();
		}
	}
	return oldrow != *row || oldcol != *col;
}
