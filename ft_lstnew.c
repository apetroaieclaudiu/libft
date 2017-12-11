#include "libft.h"

t_list* ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;

	new = (t_list*) malloc(sizeof(t_list));
	if (!new)
		return NULL;
	if (!content)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	new->content = malloc(sizeof(content_size));
	if (!new->content)
		return NULL;
	ft_memcpy (new->content, content, content_size);
	new->next = NULL;
	return new;
}