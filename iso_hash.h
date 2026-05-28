/* ANSI-C code produced by gperf version 3.3 */
/* Command-line: gperf -t --output-file=iso_hash.h iso_header.gperf  */
/* Computed positions: -k'1,3-4' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gperf@gnu.org>."
#endif

#line 1 "iso_header.gperf"

#include <string.h>
#line 4 "iso_header.gperf"
struct ISOHeader { const char *name; };

#define TOTAL_KEYWORDS 29
#define MIN_WORD_LENGTH 6
#define MAX_WORD_LENGTH 13
#define MIN_HASH_VALUE 8
#define MAX_HASH_VALUE 59
/* maximum key range = 52, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash (register const char *str, register size_t len)
{
  static unsigned char asso_values[] =
    {
      60, 60, 60, 60, 60, 60, 60, 60, 60, 60,
      60, 60, 60, 60, 60, 60, 60, 60, 60, 60,
      60, 60, 60, 60, 60, 60, 60, 60, 60, 60,
      60, 60, 60, 60, 60, 60, 60, 60, 60, 60,
      60, 60, 60, 60, 60, 60, 60, 60, 60, 60,
      60, 60, 60, 60, 23, 60, 60, 60, 60, 60,
      60, 60, 60, 60, 60, 60, 60, 60, 60, 60,
      60, 60, 60, 60, 60, 60, 60, 60, 60, 60,
      60, 60, 60, 60, 60, 60, 60, 60, 60, 60,
      60, 60, 60, 60, 60, 60, 60,  5,  0, 25,
      10,  0, 10, 30,  5,  0,  8, 60, 15, 25,
      20, 15,  0, 60,  0,  0,  0,  5,  5,  3,
      60,  0, 60, 60, 60, 60, 60, 60, 60, 60,
      60, 60, 60, 60, 60, 60, 60, 60, 60, 60,
      60, 60, 60, 60, 60, 60, 60, 60, 60, 60,
      60, 60, 60, 60, 60, 60, 60, 60, 60, 60,
      60, 60, 60, 60, 60, 60, 60, 60, 60, 60,
      60, 60, 60, 60, 60, 60, 60, 60, 60, 60,
      60, 60, 60, 60, 60, 60, 60, 60, 60, 60,
      60, 60, 60, 60, 60, 60, 60, 60, 60, 60,
      60, 60, 60, 60, 60, 60, 60, 60, 60, 60,
      60, 60, 60, 60, 60, 60, 60, 60, 60, 60,
      60, 60, 60, 60, 60, 60, 60, 60, 60, 60,
      60, 60, 60, 60, 60, 60, 60, 60, 60, 60,
      60, 60, 60, 60, 60, 60, 60, 60, 60, 60,
      60, 60, 60, 60, 60, 60
    };
  return len + asso_values[(unsigned char)str[3]] + asso_values[(unsigned char)str[2]] + asso_values[(unsigned char)str[0]];
}

struct ISOHeader *
in_word_set (register const char *str, register size_t len)
{
#if (defined __GNUC__ && __GNUC__ + (__GNUC_MINOR__ >= 6) > 4) || (defined __clang__ && __clang_major__ >= 3)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif
  static struct ISOHeader wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 28 "iso_header.gperf"
      {"string.h"},
#line 30 "iso_header.gperf"
      {"threads.h"},
#line 12 "iso_header.gperf"
      {"inttypes.h"},
#line 34 "iso_header.gperf"
      {"wctype.h"},
      {""},
#line 6 "iso_header.gperf"
      {"assert.h"},
      {""}, {""},
#line 17 "iso_header.gperf"
      {"setjmp.h"},
#line 25 "iso_header.gperf"
      {"stdio.h"},
#line 24 "iso_header.gperf"
      {"stdint.h"},
#line 22 "iso_header.gperf"
      {"stdbool.h"},
#line 33 "iso_header.gperf"
      {"wchar.h"},
      {""},
#line 32 "iso_header.gperf"
      {"uchar.h"},
#line 20 "iso_header.gperf"
      {"stdarg.h"},
      {""},
#line 19 "iso_header.gperf"
      {"stdalign.h"},
#line 21 "iso_header.gperf"
      {"stdatomic.h"},
#line 9 "iso_header.gperf"
      {"errno.h"},
#line 23 "iso_header.gperf"
      {"stddef.h"},
      {""}, {""},
#line 31 "iso_header.gperf"
      {"time.h"},
#line 8 "iso_header.gperf"
      {"ctype.h"},
#line 26 "iso_header.gperf"
      {"stdlib.h"},
      {""}, {""},
#line 16 "iso_header.gperf"
      {"math.h"},
#line 11 "iso_header.gperf"
      {"float.h"},
#line 29 "iso_header.gperf"
      {"tgmath.h"},
      {""}, {""},
#line 10 "iso_header.gperf"
      {"fenv.h"},
      {""},
#line 27 "iso_header.gperf"
      {"stdnoreturn.h"},
      {""}, {""},
#line 13 "iso_header.gperf"
      {"iso646.h"},
      {""},
#line 14 "iso_header.gperf"
      {"limits.h"},
      {""}, {""}, {""}, {""},
#line 15 "iso_header.gperf"
      {"locale.h"},
      {""}, {""}, {""}, {""},
#line 18 "iso_header.gperf"
      {"signal.h"},
#line 7 "iso_header.gperf"
      {"complex.h"}
    };
#if (defined __GNUC__ && __GNUC__ + (__GNUC_MINOR__ >= 6) > 4) || (defined __clang__ && __clang_major__ >= 3)
#pragma GCC diagnostic pop
#endif

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return (struct ISOHeader *) 0;
}
#line 35 "iso_header.gperf"


