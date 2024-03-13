/*
 ============================================================================
 Задание 1. Вывести на экран “Hello world!”
 Задание 2. Вывести на экран текст "лесенкой"
	Let’s
		go
			to walk
Задание 3. Вывести на экран рисунок из букв
    *
   ***
  *****
 *******
  HH HH
  ZZZZZ
Задание 4*. Нарисовать соты
__ __
/ \__/ \
\__/ \__/
/ \__/ \
\__/ \__/
 ============================================================================
 */



#include <stdio.h>
#include <stdlib.h>

#ifndef NULL
#define NULL   ((void *) 0)
#endif

char* pyramid[] = { "   *   ",
                    "  ***  ",
					" ***** ",
					"*******",
					" HH HH ",
					" ZZZZZ ",
					NULL
};

char* cells[] = {" _   _ ",
		         "/ \\_/ \\",
				 "\\_/ \\_/",
				 "/ \\_/ \\",
				 "\\_/ \\_/",
				 NULL
};

int main(void) {

	puts("Hello World!!!");
	puts("Let's\n\t go\n\t\t to walk");

	for(int i=0;pyramid[i];i++)
		printf("%s\n",pyramid[i]);


	for(int i=0;cells[i];i++)
			printf("%s\n",cells[i]);

	return 0;
}
