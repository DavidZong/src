/*	$OpenBSD: stdlib.h,v 1.5 2015/10/25 18:01:24 guenther Exp $	*/
/*	$NetBSD: stdlib.h,v 1.25 1995/12/27 21:19:08 jtc Exp $	*/

/*-
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)stdlib.h	5.13 (Berkeley) 6/4/91
 */

#ifndef _LIBC_STDLIB_H_
#define _LIBC_STDLIB_H_

#include_next <stdlib.h>

__BEGIN_HIDDEN_DECLS
char	*__findenv(const char *, int, int *);
void	__atexit_register_cleanup(void (*)(void));
__END_HIDDEN_DECLS

#if 0
extern PROTO_NORMAL(__mb_cur_max);
/*extern PROTO_NORMAL(suboptarg);*/
#endif

PROTO_STD_DEPRECATED(_Exit);
PROTO_DEPRECATED(a64l);
PROTO_NORMAL(abort);
PROTO_NORMAL(abs);
PROTO_NORMAL(arc4random);
PROTO_NORMAL(arc4random_buf);
PROTO_NORMAL(arc4random_uniform);
/*PROTO_NORMAL(atexit);			actually in csu */
PROTO_STD_DEPRECATED(atof);
PROTO_NORMAL(atoi);
PROTO_STD_DEPRECATED(atol);
PROTO_STD_DEPRECATED(atoll);
PROTO_STD_DEPRECATED(bsearch);
/*PROTO_NORMAL(calloc);			not yet, breaks emacs */
PROTO_NORMAL(cgetcap);
PROTO_NORMAL(cgetclose);
PROTO_NORMAL(cgetent);
PROTO_NORMAL(cgetfirst);
PROTO_NORMAL(cgetmatch);
PROTO_NORMAL(cgetnext);
PROTO_NORMAL(cgetnum);
PROTO_NORMAL(cgetset);
PROTO_NORMAL(cgetstr);
PROTO_NORMAL(cgetusedb);
PROTO_NORMAL(cgetustr);
PROTO_DEPRECATED(daemon);
PROTO_NORMAL(devname);
PROTO_NORMAL(div);
PROTO_DEPRECATED(drand48);
PROTO_DEPRECATED(ecvt);
PROTO_NORMAL(erand48);
PROTO_NORMAL(exit);
PROTO_DEPRECATED(fcvt);
/*PROTO_NORMAL(free);			not yet, breaks emacs */
PROTO_DEPRECATED(gcvt);
PROTO_DEPRECATED(getbsize);
PROTO_NORMAL(getenv);
PROTO_DEPRECATED(getloadavg);
PROTO_DEPRECATED(getprogname);
PROTO_DEPRECATED(getsubopt);
PROTO_DEPRECATED(grantpt);
PROTO_DEPRECATED(heapsort);
PROTO_DEPRECATED(initstate);
PROTO_DEPRECATED(jrand48);
PROTO_DEPRECATED(l64a);
PROTO_STD_DEPRECATED(labs);
PROTO_DEPRECATED(lcong48);
PROTO_NORMAL(lcong48_deterministic);
PROTO_DEPRECATED(ldiv);
PROTO_STD_DEPRECATED(llabs);
PROTO_STD_DEPRECATED(lldiv);
PROTO_DEPRECATED(lrand48);
/*PROTO_NORMAL(malloc);			not yet, breaks emacs */
PROTO_STD_DEPRECATED(mblen);
PROTO_STD_DEPRECATED(mbstowcs);
PROTO_STD_DEPRECATED(mbtowc);
PROTO_DEPRECATED(mergesort);
PROTO_DEPRECATED(mkdtemp);
PROTO_NORMAL(mkostemp);
PROTO_DEPRECATED(mkostemps);
PROTO_NORMAL(mkstemp);
PROTO_DEPRECATED(mkstemps);
PROTO_DEPRECATED(mktemp);
PROTO_DEPRECATED(mrand48);
PROTO_DEPRECATED(nrand48);
/*PROTO_NORMAL(posix_memalign);		not yet, breaks emacs */
PROTO_DEPRECATED(posix_openpt);
PROTO_DEPRECATED(ptsname);
PROTO_NORMAL(putenv);
PROTO_DEPRECATED(qabs);
PROTO_DEPRECATED(qdiv);
PROTO_NORMAL(qsort);
PROTO_DEPRECATED(radixsort);
PROTO_STD_DEPRECATED(rand);
PROTO_NORMAL(rand_r);
PROTO_DEPRECATED(random);
/*PROTO_NORMAL(realloc);		not yet, breaks emacs */
PROTO_NORMAL(reallocarray);
PROTO_DEPRECATED(realpath);
PROTO_DEPRECATED(seed48);
PROTO_NORMAL(seed48_deterministic);
PROTO_NORMAL(setenv);
PROTO_DEPRECATED(setproctitle);
PROTO_DEPRECATED(setprogname);
PROTO_DEPRECATED(setstate);
PROTO_DEPRECATED(sradixsort);
PROTO_DEPRECATED(srand);
PROTO_DEPRECATED(srand_deterministic);
PROTO_DEPRECATED(srand48);
PROTO_NORMAL(srand48_deterministic);
PROTO_DEPRECATED(srandom);
PROTO_DEPRECATED(srandom_deterministic);
PROTO_DEPRECATED(srandomdev);
PROTO_NORMAL(strtod);
PROTO_NORMAL(strtof);
PROTO_NORMAL(strtol);
PROTO_NORMAL(strtold);
PROTO_NORMAL(strtoll);
PROTO_NORMAL(strtonum);
/*PROTO_NORMAL(strtoq);		alias of strtoll */
PROTO_NORMAL(strtoul);
PROTO_NORMAL(strtoull);
/*PROTO_NORMAL(strtouq);	alias of strtoull */
PROTO_NORMAL(system);
PROTO_DEPRECATED(ttyslot);
PROTO_DEPRECATED(unlockpt);
PROTO_NORMAL(unsetenv);
PROTO_STD_DEPRECATED(valloc);
PROTO_STD_DEPRECATED(wcstombs);
PROTO_STD_DEPRECATED(wctomb);

#endif /* _LIBC_STDLIB_H_ */
