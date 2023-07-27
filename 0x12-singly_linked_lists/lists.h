#ifndef _HEADER_
#define _HEADER_
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif