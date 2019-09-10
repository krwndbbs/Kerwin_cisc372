/*
 * Kerwin_hello.c
 *
 * - For Problem 1 in Homework #1, a simple C program to print 
 *   "Hello Kerwin" out 10 times.
 * - For testing the Makefile in Problem 2, this program was slightly
 *   modified to print out "Hello Kerwin Dobbs" 10 times.  
 *
 *
 *  Created on: Sep 1, 2019
 *      Author: dobbskd
 */

#include <stdio.h>

int main() {
	int n = 0;
	while(n < 10) {
		n++;
		printf(" Hello Kerwin Dobbs\n");
	}
}
