#include "libft.h"

t_btree	*ft_btcreate_node(void *item)
{
	t_btree	*node;

	node = (t_btree *)malloc (sizeof(t_btree) * 1);
	if (!node)
		return (NULL);
	node->left = NULL;
	node->right = NULL;
	node->item = item;
	return (node);
}