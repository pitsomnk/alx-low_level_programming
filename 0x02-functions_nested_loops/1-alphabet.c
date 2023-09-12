#include "main.h"


	/**
	 * description:print all alphabet in lower case
	 *@letter: checks characters if alphabet
	 */


	void print_alphabet(void)
	{
		char letter;


		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);


		_putchar('\n');
	}
