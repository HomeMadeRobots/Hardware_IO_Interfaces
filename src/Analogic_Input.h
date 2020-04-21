#ifndef ANALOGIC_INPUT_H
#define ANALOGIC_INPUT_H

#include "T_Voltage.h"

/* Client_Server_Interface */
typedef struct {
    void (*Get_Voltage) ( T_Voltage* voltage );
} Analogic_Input;

#endif