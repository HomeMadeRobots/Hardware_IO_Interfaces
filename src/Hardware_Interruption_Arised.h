#ifndef HARDWARE_INTERRUPTION_ARISED_H
#define HARDWARE_INTERRUPTION_ARISED_H

#include "E_IO_Level.h"

/* Event_Interface */
/* Sent when the configured change occurred on a discrete input pin. */
typedef void (*Hardware_Interruption_Arised) ( E_IO_Level Pin_Level );

#endif