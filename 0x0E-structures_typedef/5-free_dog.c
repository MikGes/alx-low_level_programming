#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees the memory allocated for struct dog
 * @d:struct of the dog which has to be freed
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
