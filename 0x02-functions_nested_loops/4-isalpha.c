#include "main.h"
/**
 * File: 4-isalpha.c
 * Auth: Brennan D Baraban
 */

#include "holberton.h"
{
	if ((c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z'))
			return (1);
	else
		return (0);
