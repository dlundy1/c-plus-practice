/* STOCK MARKET PROGRAM
 *
 * Designed by: Group 2
 * Group Members: Deon Lundy, Robert Edsall, Chad Glitz, Brent Koryba
 * DATE STARTED: May 1, 2015
 *
 */

// NOTE to Group Members //////////////////////////////////////////////
// In order to increase readability, I've implemented the best practice
// of 'Information Hiding' (see Ch.10, pg. 661) for more detail.
// - Deon

#include <iostream>
#include "stockType.h"
#include "stockListType.h"

using namespace std;

int main()
{
	stockType run;

	run.leader();
	// Leader function calls all other functions within 'stockType' class.
	// See 'implementation.cpp  to examine details of this (and any other) function definition.

	return 0;
}
