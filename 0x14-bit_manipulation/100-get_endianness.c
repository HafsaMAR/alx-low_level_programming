/**
 * get_endianness - check whether the machine is big or little
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return ((int)*c);
}
