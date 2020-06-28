////////////////////////////////////////////////////////////////////////////////
/// @file     usb_desc.h
/// @author   AE TEAM
/// @brief    Descriptor Header for Custom HID Demo.
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
#ifndef __USB_DESC_H
#define __USB_DESC_H
// Files includes


#include "mm32_device.h"

// Includes ------------------------------------------------------------------
// Exported types ------------------------------------------------------------
// Exported constants --------------------------------------------------------
// Exported macro ------------------------------------------------------------
// Exported define -----------------------------------------------------------
#define USB_DEVICE_DESCRIPTOR_TYPE              0x01
#define USB_CONFIGURATION_DESCRIPTOR_TYPE       0x02
#define USB_STRING_DESCRIPTOR_TYPE              0x03
#define USB_INTERFACE_DESCRIPTOR_TYPE           0x04
#define USB_ENDPOINT_DESCRIPTOR_TYPE            0x05

#define HID_DESCRIPTOR_TYPE                     0x21
#define CUSTOMHID_SIZ_HID_DESC                  0x09
#define CUSTOMHID_OFF_HID_DESC                  0x12

#define CUSTOMHID_SIZ_DEVICE_DESC               18
#define CUSTOMHID_SIZ_CONFIG_DESC               41
#define CUSTOMHID_SIZ_REPORT_DESC               33//162
#define CUSTOMHID_SIZ_STRING_LANGID             4
#define CUSTOMHID_SIZ_STRING_VENDOR             38
#define CUSTOMHID_SIZ_STRING_PRODUCT            32
#define CUSTOMHID_SIZ_STRING_SERIAL             26

#define STANDARD_ENDPOINT_DESC_SIZE             0x09

// Exported functions -------------------------------------------------------
extern const u8 CustomHID_DeviceDescriptor[CUSTOMHID_SIZ_DEVICE_DESC];
extern const u8 CustomHID_ConfigDescriptor[CUSTOMHID_SIZ_CONFIG_DESC];
extern const u8 CustomHID_ReportDescriptor[CUSTOMHID_SIZ_REPORT_DESC];
extern const u8 CustomHID_StringLangID[CUSTOMHID_SIZ_STRING_LANGID];
extern const u8 CustomHID_StringVendor[CUSTOMHID_SIZ_STRING_VENDOR];
extern const u8 CustomHID_StringProduct[CUSTOMHID_SIZ_STRING_PRODUCT];
extern u8 CustomHID_StringSerial[CUSTOMHID_SIZ_STRING_SERIAL];

/// @}


/// @}

/// @}


////////////////////////////////////////////////////////////////////////////////
#endif
////////////////////////////////////////////////////////////////////////////////
