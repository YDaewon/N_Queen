#include "Çì´õ.h"



double GetExeClockTime(clock_t initial_clock)
{
	clock_t current_clock = clock();
	return ((double)(current_clock - initial_clock) / CLOCKS_PER_SEC);
}