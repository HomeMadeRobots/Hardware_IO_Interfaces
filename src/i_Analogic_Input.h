#ifndef I_ANALOGIC_INPUT_H
#define I_ANALOGIC_INPUT_H

#include "T_VOLTAGE.h"

/* Client_Server_Interface */
/* i_Analogic_Input interface defines operations allowing to manage an analogical hardware input. */
class i_Analogic_Input {
public :
    virtual void Get_Voltage( T_VOLTAGE* voltage ) = 0;
};

#endif