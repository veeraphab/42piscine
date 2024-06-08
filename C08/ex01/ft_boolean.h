#include	<unistd.h>

#ifndef	FT_BOOLEAN_H
#define	FT_BOOLEAN_H

typedef	int t_bool;
#define	TRUE 1
#define	FALSE 0
#define	SUCCESS 0
#define	EVEN(n) ((n) % 2 == 0)
#define	EVEN_MSG "I have an even number of arguments."
#define	ODD_MSG "I have an odd number of arguments."
#endif
//norminette -R CheckDefine ft_boolean.h main.c
