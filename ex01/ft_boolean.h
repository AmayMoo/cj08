#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h> 

# define EVEN(x) ((x % 2) == 0)
# define SUCCESS 0
# define EVEN_MSG "I have a pair number of arguments.\n"
# define ODD_MSG "I have an impair number of arguments.\n"

typedef enum e_bool
{
	TRUE = 1,
	FALSE = 0
}	t_bool;

#endif
