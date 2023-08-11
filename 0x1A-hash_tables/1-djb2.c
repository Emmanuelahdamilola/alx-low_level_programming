/**
 * hash_djb2 - that calculates a hash value for a given input string
 * @str: string
 * Return: returns the calculated hash value
 *
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
