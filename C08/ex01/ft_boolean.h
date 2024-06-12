#include <unistd.h>

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

typedef int	t_bool;
# define TRUE 1
# define FALSE 0
# define SUCCESS 0
# define EVEN(nb) ((nb) % 2 == 0)
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
#endif

// norminette -R CheckDefine 
