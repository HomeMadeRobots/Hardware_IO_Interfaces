#ifndef I_DISCRETE_OUTPUT
#define I_DISCRETE_OUTPUT

#include "E_IO_LEVEL.h"

/* Client_Server_Interface */
/* i_Discrete_Output interface defines operations allowing to manage an analogical hardware 
   output. */
class i_Discrete_Output {
public :
    /* Synchronous_Operation */
    virtual void Set_Level( E_IO_LEVEL level ) = 0;
};

#endif