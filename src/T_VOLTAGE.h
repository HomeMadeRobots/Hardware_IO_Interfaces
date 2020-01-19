#ifndef T_VOLTAGE_H
#define T_VOLTAGE_H

#include "stdint.h"

/* Physical_Data_Type */
/* Allows to model a data representing a voltage with a resolution of 0.004887 V. 
  (Typically used to represent a data from 0 to 5 V.) */
/*
Unit : V
Resolution : 0.004887
Offset : 0

min : 0 V
max : -
*/
typedef uint16_t T_VOLTAGE;

#endif