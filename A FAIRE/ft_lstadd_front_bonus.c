#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

t_list *ft_lstnew(void *lettre)
{
    t_list *lstnew;
        
    lstnew = (t_list *)malloc(sizeof(t_list));
    if (lstnew == NULL)
    {
        return NULL;
    }
    lstnew->content = lettre;
    lstnew->next = NULL;
    return  (lstnew); 
}

int main ()
{
	char *c = "nn";
	char *d = "ouiii";
	char *e = "GG";
	t_list *lst;
	lst = malloc(sizeof(t_list));
	t_list *new;
	new = malloc(sizeof(t_list));
	new->content = e;
	lst->content = c;
	lst->next = ft_lstnew(d);
	printf("%s\n",(char *)lst->content);
	printf("%s\n",(char *)lst->next->content);
	printf("\n");
	printf("apres ajout en front :\n");
	ft_lstadd_front(&lst, new);
	printf("%s\n",(char *)lst->content);
	printf("%s\n",(char *)lst->next->content);
	printf("%s\n",(char *)lst->next->next->content);
}