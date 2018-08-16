/*******************************************************************************
  SPI Peripheral Library Template Implementation

  File Name:
    spi_MasterControl_Default.h

  Summary:
    SPI PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : MasterControl
    and its Variant : Default
    For following APIs :
        PLIB_SPI_MasterEnable
        PLIB_SPI_SlaveEnable
        PLIB_SPI_ExistsMasterControl

*******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2013 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
*******************************************************************************/

//DOM-IGNORE-END

#ifndef _SPI_MASTERCONTROL_DEFAULT_H
#define _SPI_MASTERCONTROL_DEFAULT_H

#include "spi_registers.h"

//******************************************************************************
/* Function :  SPI_MasterEnable_Default

  Summary:
    Implements Default variant of PLIB_SPI_MasterEnable 

  Description:
    This template implements the Default variant of the PLIB_SPI_MasterEnable function.
*/

PLIB_TEMPLATE void SPI_MasterEnable_Default( SPI_MODULE_ID index )
{
    spi_registers_t volatile * spi = ((spi_registers_t *)(index));
    spi->SPIxCONSET = SPIxCON_MSTEN_MASK;
}


//******************************************************************************
/* Function :  SPI_SlaveEnable_Default

  Summary:
    Implements Default variant of PLIB_SPI_SlaveEnable 

  Description:
    This template implements the Default variant of the PLIB_SPI_SlaveEnable function.
*/

PLIB_TEMPLATE void SPI_SlaveEnable_Default( SPI_MODULE_ID index )
{
    spi_registers_t volatile * spi = ((spi_registers_t *)(index));
    spi->SPIxCONCLR = SPIxCON_MSTEN_MASK;
}


//******************************************************************************
/* Function :  SPI_ExistsMasterControl_Default

  Summary:
    Implements Default variant of PLIB_SPI_ExistsMasterControl

  Description:
    This template implements the Default variant of the PLIB_SPI_ExistsMasterControl function.
*/

#define PLIB_SPI_ExistsMasterControl PLIB_SPI_ExistsMasterControl
PLIB_TEMPLATE bool SPI_ExistsMasterControl_Default( SPI_MODULE_ID index )
{
    return true;
}


#endif /*_SPI_MASTERCONTROL_DEFAULT_H*/

/******************************************************************************
 End of File
*/

