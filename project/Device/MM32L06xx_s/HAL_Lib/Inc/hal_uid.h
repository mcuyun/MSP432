////////////////////////////////////////////////////////////////////////////////
/// @file     hal_uid.h
/// @author   AE TEAM
/// @brief    THIS FILE CONTAINS ALL THE FUNCTIONS PROTOTYPES FOR THE UID
///           FIRMWARE LIBRARY.
////////////////////////////////////////////////////////////////////////////////
/// @attention
///
/// THE EXISTING FIRMWARE IS ONLY FOR REFERENCE, WHICH IS DESIGNED TO PROVIDE
/// CUSTOMERS WITH CODING INFORMATION ABOUT THEIR PRODUCTS SO THEY CAN SAVE
/// TIME. THEREFORE, MINDMOTION SHALL NOT BE LIABLE FOR ANY DIRECT, INDIRECT OR
/// CONSEQUENTIAL DAMAGES ABOUT ANY CLAIMS ARISING OUT OF THE CONTENT OF SUCH
/// HARDWARE AND/OR THE USE OF THE CODING INFORMATION CONTAINED HEREIN IN
/// CONNECTION WITH PRODUCTS MADE BY CUSTOMERS.
///
/// <H2><CENTER>&COPY; COPYRIGHT MINDMOTION </CENTER></H2>
////////////////////////////////////////////////////////////////////////////////

// Define to prevent recursive inclusion
#ifndef __HAL_UID_H
#define __HAL_UID_H

// Files includes
#include "types.h"
#include "mm32_device.h"

////////////////////////////////////////////////////////////////////////////////
/// @addtogroup MM32_Hardware_Abstract_Layer
/// @{

////////////////////////////////////////////////////////////////////////////////
/// @defgroup UID_HAL
/// @brief UID HAL modules
/// @{


/////////////////////////////////////1///////////////////////////////////////////
/// @defgroup UID_Exported_Variables
/// @{
#ifdef _HAL_UID_C_
#define GLOBAL

#else
#define GLOBAL extern


#endif

GLOBAL u8 device_id_data[12];

#undef GLOBAL

/// @}

////////////////////////////////////////////////////////////////////////////////
/// @defgroup UID_Exported_Functions
/// @{
void GetChipUID(void);

/// @}



/// @}

/// @}

////////////////////////////////////////////////////////////////////////////////
#endif // __HAL_UID_H 
////////////////////////////////////////////////////////////////////////////////

