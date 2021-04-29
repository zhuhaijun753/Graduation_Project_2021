/*****************************************************/
 /* Author      : Mosad                              */
 /* Version     : v01                                */
 /* date        : 29/4/2020                          */
/*****************************************************/
#ifndef RTE_SEND_UPDATE_PORT_H
#define RTE_SEND_UPDATE_PORT_H

#include "Rte.h"

/**************************************************************************/
/*                         Provided Ports                                 */
/**************************************************************************/
#define     RTE_WRITE_SYSTEM_STATE             Rte_WriteSystemState


/**************************************************************************/
/*                         Received Ports                                 */
/**************************************************************************/
#define    RTE_READ_CRC_VALUE                 Rte_ReadCrc
#deine     RTE_READ_CODE_SIZE                 Rte_ReadCodeSize
#define    RTE_READ_DECRYPTED_DATA_BUUFER     Rte_ReadDecryptedDataBuffer

#endif
