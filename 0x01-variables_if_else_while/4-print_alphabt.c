#!/bin/bash
#include <stdio.h>



/**
 *
 *   * main - Ommit a few alphabets
 *
 *     *
 *
 *       * Return: Always 
 *
 *         */

int main(void)

{

	char c;

	for (c = 'a'; c <= 'z'; c++)

	{

		if (c != 'e' && c != 'q')

		{

			putchar(c);

		}

	}

	putchar('\n');

	return (0);

}


