#include "lists.h"

int check_cycle(listint_t *list)
{
	listint_t *iSlow, *iFast;

	iSlow = iFast = list;

	while (iSlow && iFast && iFast->next)
	{
		iSlow = iSlow->next;
		iFast = iFast->next->next;
		if (iSlow == iFast)
			return (1);
	}
	return (0);
}
