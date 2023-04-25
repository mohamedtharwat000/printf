#ifndef HEADER_PRINTF
#define HEADER_PRINTF

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
#include <stdarg.h>

#define OUTPUT_BUF_SIZE 1024                                        امر لتاسك 4            
#define BUF_FLUSH -1

#define NULL_STRING "(null)"                                اي null_string بيبقا ع الكلمه اللي مكتوبه بعده

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
* @l_modifier: on if l_modifier is specified
*/
typedef struct parameters
{
  unsigned int unsign         : 1;        امر لتاسك 7
    
unsigned int plus_flag       : 1;       
unsigned int space_flag      : 1; 
unsigned int hashtag_flag    : 1;     لتاسك 7
unsigned int zero_flag       : 1;       لتاسك 11
unsigned int minus_flag      : 1;           امر لتاسك 12

unsigned int width:                     لتاسك 9
unsigned int pracision;                   لتاسك 10

unsigned int h_modifier     : 1;            الامرين لتاسك 8
unsigned int l_modifier     : 1;
} params_t;

/**
* struct specifier - struct token
*
* @specifier: format token
* @f: The function associated
*/
typedef struct specifier
{
  char *specifier;
  int (*f) (va_list, params_t *);
} specifier_t;

/* _put.c module */                       هنا بقا اسماء الفايلات من هنا لحد تحت كل فانكشن باسم فايل ع حسب احنا كاتبين اسم الفايل اي وهياخد اوامر اي
int _puts(char *str);
int _putchar(int c);

/* print_functions.c module */                                                  فيها 3 اوامر لتاسك 0 وامرين لتاسك 1
int print_char(va_list ap, params_t *params);
int print_int(va_list ap, params_t *params);
int print_string(va_list ap, params_t *params);
int print_percent(va_list ap, params_t *params);
int print_s(va_list ap, params_t *params);                  امر لتاسك 5
 
/* number.c module */
char *convert(long int num, int base, int flags, params_t *params);
int print_unsigned(va_list ap, params_t *params);                         امر لتاسك 3
int print_address(va_list ap, params_t *params);                              امر لتاسك 6

/* specifier.c module */
int (*get_specifier(char *s)) (va_list ap, params_t, *params);
int get_print_func(char *s, va_list ap, params_t, *params);
int get_flag(char *s, params_t, *params);
int get_modifier(char *s, params_t, *params);
char *get_width(char *s, params_t *params, va_list ap);
  
/* convert_number.c module */
int print_hex(va_list ap, params_t *params);                        امر لتاسك 3
int print_HEX(va_list ap, params_t *params);                    امرلتاسك 3
int print_binary(va_list ap, params_t *params);                 امر لتاسك 2
int print_octal(va_list ap, params_t *params);                    امر لتاسك 3

/* simple_printers.c module */
int print_form_to(char *start, char *start, char *excapt);
int print_rev(va_list ap, params_t *params);                لتاسك 13
int print_rot13(va_list ap, params_t *params);            لتاسك 14

/* print_number.c module */       دا اسم الفايل
int _isdigit(int c);
int _strlen(char *s);
int print_number(char *str, params_t *params);
int print_number_right_shift(char *str, params_t *params);
int print_number_left_shift(char *str, params_t *params);

/* params.c module */
void init_precision(params_t *params, va_list ap);

/* string_fields.c modoule */
char *get_precision(char *p, params, va_list ap);

/* _printf.c module */
int _printf(const char *format, ...);

#endif /* HEADER_PRINTF */
