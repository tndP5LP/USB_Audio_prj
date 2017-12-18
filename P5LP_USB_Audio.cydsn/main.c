/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

   UART_dbg_Start();

   I2C_M_FF_Start();
   I2C_S_PCF8574_Start();
    
   TinyPrintf_Start();
   
   printf("%s", "Hello World");
   NewLine();
   TriggerScope();
   I2C_S_PCF8574_Test();    
    
    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
