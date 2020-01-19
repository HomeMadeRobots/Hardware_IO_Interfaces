#ifndef I_ANALOGIC_OUTPUT
#define I_ANALOGIC_OUTPUT

#include "T_VOLTAGE.h"

/* Client_Server_Interface */
/* i_Analogic_Output interface defines operations allowing to manage a analogical hardware 
   output. */
class i_Analogic_Output {
public :
    /* Synchronous_Operation */
    virtual void Set_Voltage( T_VOLTAGE voltage ) = 0;
};

#endif