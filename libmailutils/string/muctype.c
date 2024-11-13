/* GNU Mailutils -- a suite of utilities for electronic mail
   Copyright (C) 2009-2022 Free Software Foundation, Inc.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 3 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General
   Public License along with this library.  If not, see
   <http://www.gnu.org/licenses/>. */

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif
#include <mailutils/cctype.h>

int mu_c_tab[MU_C_TAB_MAX] = {
  /* 000 */ MU_CTYPE_CNTRL|MU_CTYPE_NWCTL,
  /* 001 */ MU_CTYPE_CNTRL|MU_CTYPE_NWCTL,
  /* 002 */ MU_CTYPE_CNTRL|MU_CTYPE_NWCTL,
  /* 003 */ MU_CTYPE_CNTRL|MU_CTYPE_NWCTL,
  /* 004 */ MU_CTYPE_CNTRL|MU_CTYPE_NWCTL,
  /* 005 */ MU_CTYPE_CNTRL|MU_CTYPE_NWCTL,
  /* 006 */ MU_CTYPE_CNTRL|MU_CTYPE_NWCTL,
  /* 007 */ MU_CTYPE_CNTRL|MU_CTYPE_NWCTL,
  /* 010 */ MU_CTYPE_CNTRL|MU_CTYPE_NWCTL,
  /* \t  */ MU_CTYPE_CNTRL|MU_CTYPE_SPACE|MU_CTYPE_BLANK,
  /* \n  */ MU_CTYPE_CNTRL|MU_CTYPE_SPACE|MU_CTYPE_ENDLN,
  /* \v  */ MU_CTYPE_CNTRL|MU_CTYPE_SPACE|MU_CTYPE_NWCTL,
  /* \f  */ MU_CTYPE_CNTRL|MU_CTYPE_SPACE|MU_CTYPE_NWCTL,
  /* \r  */ MU_CTYPE_CNTRL|MU_CTYPE_SPACE|MU_CTYPE_ENDLN,
  /* 016 */ MU_CTYPE_CNTRL|MU_CTYPE_NWCTL,
  /* 017 */ MU_CTYPE_CNTRL|MU_CTYPE_NWCTL,
  /* 020 */ MU_CTYPE_CNTRL|MU_CTYPE_NWCTL,
  /* 021 */ MU_CTYPE_CNTRL|MU_CTYPE_NWCTL,
  /* 022 */ MU_CTYPE_CNTRL|MU_CTYPE_NWCTL,
  /* 023 */ MU_CTYPE_CNTRL|MU_CTYPE_NWCTL,
  /* 024 */ MU_CTYPE_CNTRL|MU_CTYPE_NWCTL,
  /* 025 */ MU_CTYPE_CNTRL|MU_CTYPE_NWCTL,
  /* 026 */ MU_CTYPE_CNTRL|MU_CTYPE_NWCTL,
  /* 027 */ MU_CTYPE_CNTRL|MU_CTYPE_NWCTL,
  /* 030 */ MU_CTYPE_CNTRL|MU_CTYPE_NWCTL,
  /* 031 */ MU_CTYPE_CNTRL|MU_CTYPE_NWCTL,
  /* 032 */ MU_CTYPE_CNTRL|MU_CTYPE_NWCTL,
  /* 033 */ MU_CTYPE_CNTRL|MU_CTYPE_NWCTL,
  /* 034 */ MU_CTYPE_CNTRL|MU_CTYPE_NWCTL,
  /* 035 */ MU_CTYPE_CNTRL|MU_CTYPE_NWCTL,
  /* 036 */ MU_CTYPE_CNTRL|MU_CTYPE_NWCTL,
  /* 037 */ MU_CTYPE_CNTRL|MU_CTYPE_NWCTL,
  /* ' ' */ MU_CTYPE_PRINT|MU_CTYPE_SPACE|MU_CTYPE_BLANK,
  /* !   */ MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_PUNCT|MU_CTYPE_IMATM,
  /* "   */ MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_PUNCT|MU_CTYPE_TSPEC|MU_CTYPE_IMSPC,
  /* #   */ MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_PUNCT|MU_CTYPE_IMATM,
  /* $   */ MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_PUNCT|MU_CTYPE_IMATM,
  /* %   */ MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_PUNCT|MU_CTYPE_IMATM,
  /* &   */ MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_PUNCT|MU_CTYPE_IMATM,
  /* '   */ MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_PUNCT|MU_CTYPE_IMATM,
  /* (   */ MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_PUNCT|MU_CTYPE_TSPEC|MU_CTYPE_IMSPC,
  /* )   */ MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_PUNCT|MU_CTYPE_TSPEC|MU_CTYPE_IMSPC,
  /* *   */ MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_PUNCT|MU_CTYPE_IMATM,
  /* +   */ MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_PUNCT|MU_CTYPE_IMATM,
  /* ,   */ MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_PUNCT|MU_CTYPE_TSPEC|MU_CTYPE_IMSPC, 
  /* -   */ MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_PUNCT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* .   */ MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_PUNCT|MU_CTYPE_IMSPC,
  /* /   */ MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_PUNCT|MU_CTYPE_TSPEC|MU_CTYPE_IMATM,
  /* 0   */ MU_CTYPE_DIGIT|MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* 1   */ MU_CTYPE_DIGIT|MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* 2   */ MU_CTYPE_DIGIT|MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* 3   */ MU_CTYPE_DIGIT|MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* 4   */ MU_CTYPE_DIGIT|MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* 5   */ MU_CTYPE_DIGIT|MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* 6   */ MU_CTYPE_DIGIT|MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* 7   */ MU_CTYPE_DIGIT|MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* 8   */ MU_CTYPE_DIGIT|MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* 9   */ MU_CTYPE_DIGIT|MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* :   */ MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_PUNCT|MU_CTYPE_TSPEC|MU_CTYPE_IMSPC,
  /* ;   */ MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_PUNCT|MU_CTYPE_TSPEC|MU_CTYPE_IMSPC,
  /* <   */ MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_PUNCT|MU_CTYPE_TSPEC|MU_CTYPE_IMSPC,
  /* =   */ MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_PUNCT|MU_CTYPE_TSPEC|MU_CTYPE_IMATM,
  /* >   */ MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_PUNCT|MU_CTYPE_TSPEC|MU_CTYPE_IMSPC,
  /* ?   */ MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_PUNCT|MU_CTYPE_TSPEC|MU_CTYPE_IMATM,
  /* @   */ MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_PUNCT|MU_CTYPE_TSPEC|MU_CTYPE_IMSPC,
  /* A   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_UPPER|MU_CTYPE_XLETR|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* B   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_UPPER|MU_CTYPE_XLETR|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* C   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_UPPER|MU_CTYPE_XLETR|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* D   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_UPPER|MU_CTYPE_XLETR|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* E   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_UPPER|MU_CTYPE_XLETR|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* F   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_UPPER|MU_CTYPE_XLETR|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* G   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_UPPER|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* H   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_UPPER|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* I   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_UPPER|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* J   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_UPPER|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* K   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_UPPER|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* L   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_UPPER|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* M   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_UPPER|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* N   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_UPPER|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* O   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_UPPER|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* P   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_UPPER|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* Q   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_UPPER|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* R   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_UPPER|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* S   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_UPPER|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* T   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_UPPER|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* U   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_UPPER|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* V   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_UPPER|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* W   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_UPPER|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* X   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_UPPER|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* Y   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_UPPER|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* Z   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_UPPER|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* [   */ MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_PUNCT|MU_CTYPE_TSPEC|MU_CTYPE_IMSPC,
  /* \   */ MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_PUNCT|MU_CTYPE_TSPEC|MU_CTYPE_IMSPC,
  /* ]   */ MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_PUNCT|MU_CTYPE_TSPEC|MU_CTYPE_IMSPC,
  /* ^   */ MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_PUNCT|MU_CTYPE_IMATM,
  /* _   */ MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_PUNCT|MU_CTYPE_HEADR|MU_CTYPE_IDENT|MU_CTYPE_IMATM,
  /* `   */ MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_PUNCT|MU_CTYPE_IMATM,
  /* a   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_LOWER|MU_CTYPE_PRINT|MU_CTYPE_XLETR|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* b   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_LOWER|MU_CTYPE_PRINT|MU_CTYPE_XLETR|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* c   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_LOWER|MU_CTYPE_PRINT|MU_CTYPE_XLETR|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* d   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_LOWER|MU_CTYPE_PRINT|MU_CTYPE_XLETR|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* e   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_LOWER|MU_CTYPE_PRINT|MU_CTYPE_XLETR|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* f   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_LOWER|MU_CTYPE_PRINT|MU_CTYPE_XLETR|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* g   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_LOWER|MU_CTYPE_PRINT|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* h   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_LOWER|MU_CTYPE_PRINT|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* i   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_LOWER|MU_CTYPE_PRINT|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* j   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_LOWER|MU_CTYPE_PRINT|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* k   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_LOWER|MU_CTYPE_PRINT|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* l   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_LOWER|MU_CTYPE_PRINT|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* m   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_LOWER|MU_CTYPE_PRINT|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* n   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_LOWER|MU_CTYPE_PRINT|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* o   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_LOWER|MU_CTYPE_PRINT|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* p   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_LOWER|MU_CTYPE_PRINT|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* q   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_LOWER|MU_CTYPE_PRINT|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* r   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_LOWER|MU_CTYPE_PRINT|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* s   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_LOWER|MU_CTYPE_PRINT|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* t   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_LOWER|MU_CTYPE_PRINT|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* u   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_LOWER|MU_CTYPE_PRINT|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* v   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_LOWER|MU_CTYPE_PRINT|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* w   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_LOWER|MU_CTYPE_PRINT|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* x   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_LOWER|MU_CTYPE_PRINT|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* y   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_LOWER|MU_CTYPE_PRINT|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* z   */ MU_CTYPE_ALPHA|MU_CTYPE_GRAPH|MU_CTYPE_LOWER|MU_CTYPE_PRINT|MU_CTYPE_IDENT|MU_CTYPE_HEADR|MU_CTYPE_IMATM,
  /* {   */ MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_PUNCT|MU_CTYPE_IMATM,
  /* |   */ MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_PUNCT|MU_CTYPE_IMATM,
  /* }   */ MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_PUNCT|MU_CTYPE_IMATM,
  /* ~   */ MU_CTYPE_GRAPH|MU_CTYPE_PRINT|MU_CTYPE_PUNCT|MU_CTYPE_IMATM,
  /* 177 */ MU_CTYPE_CNTRL|MU_CTYPE_NWCTL
};
