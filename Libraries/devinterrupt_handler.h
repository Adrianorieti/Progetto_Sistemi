#ifndef DEVINTERRUPT_HANDLER_H_INCLUDED
#define DEVINTERRUPT_HANDLER_H_INCLUDED

#include "libraries.h"
#include "definitions.h"
#include "asl.h" 

/* Cycles and handles all pending interrupts from highest to lowest priority */
void InterruptPendingChecker();

#endif