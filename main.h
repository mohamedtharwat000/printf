#ifndef HEADER_PRINTF
#define HEADER_PRINTF

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
#include <stdarg.h>

#define OUTPUT_BUF_SIZE 1024
#define BUF_FLUSH -1

#define NULL_STRING "(null)"

#define PARAMS_INIT {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

#define CONVERT_LOWERCASE   1 
#define CONVERT_UNSIGNED    2

/**
* struct parameters - parameters struct
* 
* @unsign: flag if unsigned value
*
* @plus_flag: on if plus_flag specified
* @space_flag: on if hashtag_flag specified
* @hashtag_flag: on if _flag specified
* @zero_flag: on if _flag specified
* @minus_flag: on if _flag specified
*
* @width: field width specified
* @precision: field precision specified
*
* @h_modifier: on if h_modifier is specified
*@1_modifier: on if 1_modifier is specified
*/








int _printf(const char *format, ...);

#endif /* HEADER_PRINTF */
