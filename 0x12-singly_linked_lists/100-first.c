#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * startup - function executed before the main function
 *
 */
void startup(void)
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}

/**
 * before_main - executed before main
 */
void before_main(void)__attribute__((constructor));
void before_main(void)
{
	startup();
}
