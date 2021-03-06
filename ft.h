#ifndef FT_H
# define FT_H

# include <stdlib.h>

void	ft_putchar(char c);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_putnbr(int nbr);
int		issp(char c);
int		isnum(char *c);
int		isope(char c);
int		atoip(char **str);
int		calc(int *num, int *ope, int *n, int *o);
int		eval_expr(char *str);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int		ft_to_num(char *nb);

#endif
