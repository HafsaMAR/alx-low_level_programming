#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_function - function that add the pointed function
 */

void add_function(void(*func)(void))
{
	func_t *head_node,* new_node;

	head_node= NULL;
	new_node = malloc(sizeof(func_t));
	new_node->func = func;
	new_node->next = head_node;
	head_node = new_node;
}
/**
 * startup - function executed before the main function
 *
 */
void startup(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

/**
 * before_main - executed before main
 */
void before_main(void)__attribute__((constructor));
void before_main(void)
{
	add_function(startup);
}
