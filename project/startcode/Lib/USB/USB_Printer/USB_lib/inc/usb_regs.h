////////////////////////////////////////////////////////////////////////////////
/// @file     usb_regs.h
/// @author   AE TEAM
/// @brief    Interface prototype functions to USB cell registers.
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
#ifndef __USB_REGS_H
#define __USB_REGS_H


// endpoints enumeration
#define ENDP0   ((u8)0)
#define ENDP1   ((u8)1)
#define ENDP2   ((u8)2)
#define ENDP3   ((u8)3)
#define ENDP4   ((u8)4)

// Exported macro --------------------------------------------------------------



////////////////////////////////////////////////////////////////////////////////
/// @brief SetUSB_TOP
////////////////////////////////////////////////////////////////////////////////
#define _SetUSB_TOP(wRegValue)          (USB->TOP  |= (u16)wRegValue)

////////////////////////////////////////////////////////////////////////////////
/// @brief ClrUSB_TOP
////////////////////////////////////////////////////////////////////////////////
#define _ClrUSB_TOP(wRegValue)          (USB->TOP  &= (u16)~wRegValue)


////////////////////////////////////////////////////////////////////////////////
/// @brief SetUSB_ISTR
////////////////////////////////////////////////////////////////////////////////
#define _ClrUSB_INT_STA(wRegValue)      (USB->INT_STATE  = (u16)wRegValue)

////////////////////////////////////////////////////////////////////////////////
/// @brief GetUSB_ISTR
////////////////////////////////////////////////////////////////////////////////
#define _GetUSB_INT_STA()               (USB->INT_STATE)


////////////////////////////////////////////////////////////////////////////////
/// @brief ClrEP_INT_STA ,write 1 clear 0.
////////////////////////////////////////////////////////////////////////////////
#define _ClrEP_INT_STA(wRegValue)       (USB->EP_INT_STATE  = (u16)wRegValue)

////////////////////////////////////////////////////////////////////////////////
/// @brief GetEP_INT_STA
////////////////////////////////////////////////////////////////////////////////
#define _GetEP_INT_STA()                (USB->EP_INT_STATE)


////////////////////////////////////////////////////////////////////////////////
/// @brief ClrEP0_INT_STA
////////////////////////////////////////////////////////////////////////////////
#define _ClrEP0_INT_STA(wRegValue)      (USB->EP0_INT_STATE  = (u16)wRegValue)

////////////////////////////////////////////////////////////////////////////////
/// @brief GetEP0_INT_STA
////////////////////////////////////////////////////////////////////////////////
#define _GetEP0_INT_STA()               (USB->EP0_INT_STATE)


////////////////////////////////////////////////////////////////////////////////
/// @brief SetUSB_INT_EN
////////////////////////////////////////////////////////////////////////////////
#define _SetUSB_INT_EN(wRegValue)       (USB->INT_EN  |= (u16)wRegValue)

////////////////////////////////////////////////////////////////////////////////
/// @brief ClrUSB_INT_EN
////////////////////////////////////////////////////////////////////////////////
#define _ClrUSB_INT_EN(wRegValue)       (USB->INT_EN  &= (u16)~wRegValue)


////////////////////////////////////////////////////////////////////////////////
/// @brief SetUSB_INT_EN
////////////////////////////////////////////////////////////////////////////////
#define _SetEP_INT_EN(wRegValue)        (USB->EP_INT_EN  |= (u16)wRegValue)

////////////////////////////////////////////////////////////////////////////////
/// @brief SetUSB_INT_EN
////////////////////////////////////////////////////////////////////////////////
#define _ClrEP_INT_EN(wRegValue)        (USB->EP_INT_EN  &= (u16)~wRegValue)


////////////////////////////////////////////////////////////////////////////////
/// @brief SetEP0_INT_EN
////////////////////////////////////////////////////////////////////////////////
#define _SetEP0_INT_EN(wRegValue)       (USB->EP0_INT_EN |= (u16)wRegValue)

////////////////////////////////////////////////////////////////////////////////
/// @brief SetEP0_INT_EN
////////////////////////////////////////////////////////////////////////////////
#define _ClrEP0_INT_EN(wRegValue)       (USB->EP0_INT_EN &= (u16)~wRegValue)


////////////////////////////////////////////////////////////////////////////////
/// @brief ClrEP1_INT_STA
////////////////////////////////////////////////////////////////////////////////
#define _ClrEP1_INT_STA(wRegValue)      (USB->EP1_INT_STATE = (u16)wRegValue)

////////////////////////////////////////////////////////////////////////////////
/// @brief GetEP1_INT_EN
////////////////////////////////////////////////////////////////////////////////
#define _GetEP1_INT_STA()               (USB->EP1_INT_STATE)


////////////////////////////////////////////////////////////////////////////////
/// @brief ClrEP2_INT_STA
////////////////////////////////////////////////////////////////////////////////
#define _ClrEP2_INT_STA(wRegValue)      (USB->EP2_INT_STATE = (u16)wRegValue)

////////////////////////////////////////////////////////////////////////////////
/// @brief GetEP2_INT_STA
////////////////////////////////////////////////////////////////////////////////
#define _GetEP2_INT_STA()               (USB->EP2_INT_STATE)


////////////////////////////////////////////////////////////////////////////////
/// @brief ClrEP3_INT_STA
////////////////////////////////////////////////////////////////////////////////
#define _ClrEP3_INT_STA(wRegValue)      (USB->EP3_INT_STATE = (u16)wRegValue)

////////////////////////////////////////////////////////////////////////////////
/// @brief GetEP3_INT_STA
////////////////////////////////////////////////////////////////////////////////
#define _GetEP3_INT_STA()               (USB->EP3_INT_STATE)


////////////////////////////////////////////////////////////////////////////////
/// @brief ClrEP4_INT_STA
////////////////////////////////////////////////////////////////////////////////
#define _ClrEP4_INT_STA(wRegValue)      (USB->EP4_INT_STATE = (u16)wRegValue)

////////////////////////////////////////////////////////////////////////////////
/// @brief GetEP4_INT_STA
////////////////////////////////////////////////////////////////////////////////
#define _GetEP4_INT_STA()               (USB->EP4_INT_STATE)


////////////////////////////////////////////////////////////////////////////////
/// @brief ClrEPn_INT_STA ,n = 1,2,3,4
////////////////////////////////////////////////////////////////////////////////
#define _ClrEPn_INT_STA(wRegValue,n)    (*(u32*)((u32)(&(USB->EP1_INT_STATE))+(n-1)*4) = (u16)wRegValue)

////////////////////////////////////////////////////////////////////////////////
/// @brief GetEPn_INT_EN
////////////////////////////////////////////////////////////////////////////////
#define _GetEPn_INT_STA(n)              (*(u32*)((u32)(&(USB->EP1_INT_STATE))+(n-1)*4))


////////////////////////////////////////////////////////////////////////////////
/// @brief SetEP1_INT_EN
////////////////////////////////////////////////////////////////////////////////
#define _SetEP1_INT_EN(wRegValue)       (USB->EP1_INT_EN |= (u16)wRegValue)

////////////////////////////////////////////////////////////////////////////////
/// @brief SetEP1_INT_EN
////////////////////////////////////////////////////////////////////////////////
#define _ClrEP1_INT_EN(wRegValue)       (USB->EP1_INT_EN &= (u16)~wRegValue)


////////////////////////////////////////////////////////////////////////////////
/// @brief SetEP2_INT_EN
////////////////////////////////////////////////////////////////////////////////
#define _SetEP2_INT_EN(wRegValue)       (USB->EP2_INT_EN |= (u16)wRegValue)

////////////////////////////////////////////////////////////////////////////////
/// @brief SetEP2_INT_EN
////////////////////////////////////////////////////////////////////////////////
#define _ClrEP2_INT_EN(wRegValue)       (USB->EP2_INT_EN &= (u16)~wRegValue)


////////////////////////////////////////////////////////////////////////////////
/// @brief SetEP3_INT_EN
////////////////////////////////////////////////////////////////////////////////
#define _SetEP3_INT_EN(wRegValue)       (USB->EP3_INT_EN |= (u16)wRegValue)

////////////////////////////////////////////////////////////////////////////////
/// @brief SetEP3_INT_EN
////////////////////////////////////////////////////////////////////////////////
#define _ClrEP3_INT_EN(wRegValue)       (USB->EP3_INT_EN &= (u16)~wRegValue)


////////////////////////////////////////////////////////////////////////////////
/// @brief SetEP4_INT_EN
////////////////////////////////////////////////////////////////////////////////
#define _SetEP4_INT_EN(wRegValue)       (USB->EP4_INT_EN |= (u16)wRegValue)

////////////////////////////////////////////////////////////////////////////////
/// @brief SetEP4_INT_EN
////////////////////////////////////////////////////////////////////////////////
#define _ClrEP4_INT_EN(wRegValue)       (USB->EP4_INT_EN &= (u16)~wRegValue)


////////////////////////////////////////////////////////////////////////////////
/// @brief GetEP4_INT_EN
////////////////////////////////////////////////////////////////////////////////
#define _GetEPn_INT_EN(n)               (*(u32*)((u32)(&(USB->EP1_INT_EN))+(n-1)*4))

////////////////////////////////////////////////////////////////////////////////
/// @brief GetEP4_INT_EN
////////////////////////////////////////////////////////////////////////////////
#define _SetEPn_INT_EN(wRegValue,n)     (*(u32*)((u32)(&(USB->EP1_INT_EN))+(n-1)*4) = (u16)wRegValue)


////////////////////////////////////////////////////////////////////////////////
/// @brief Set_EP_EN
////////////////////////////////////////////////////////////////////////////////
#define _SetUSB_ADDR(wRegValue)         (USB->ADDR = (u16)wRegValue)


////////////////////////////////////////////////////////////////////////////////
/// @brief Set_EP_EN
////////////////////////////////////////////////////////////////////////////////
#define _SetEP_EN(wRegValue)            (USB->EP_EN |= (u16)wRegValue)

////////////////////////////////////////////////////////////////////////////////
/// @brief Clr_EP_EN
////////////////////////////////////////////////////////////////////////////////
#define _ClrEP_EN(wRegValue)            (USB->EP_EN &= (u16)~wRegValue)


////////////////////////////////////////////////////////////////////////////////
/// @brief SetUSB_AVIL0
////////////////////////////////////////////////////////////////////////////////
#define _SetUSB_AVIL0(wRegValue)        (USB->EP0_AVIL  = (u16)wRegValue)


////////////////////////////////////////////////////////////////////////////////
/// @brief SetUSB_AVIL1
////////////////////////////////////////////////////////////////////////////////
#define _SetUSB_AVIL1(wRegValue)        (USB->EP1_AVIL  = (u16)wRegValue)


////////////////////////////////////////////////////////////////////////////////
/// @brief SetUSB_AVIL2
////////////////////////////////////////////////////////////////////////////////
#define _SetUSB_AVIL2(wRegValue)        (USB->EP2_AVIL  = (u16)wRegValue)


////////////////////////////////////////////////////////////////////////////////
/// @brief SetUSB_AVIL3
////////////////////////////////////////////////////////////////////////////////
#define _SetUSB_AVIL3(wRegValue)        (USB->EP3_AVIL  = (u16)wRegValue)


////////////////////////////////////////////////////////////////////////////////
/// @brief SetUSB_AVIL4
////////////////////////////////////////////////////////////////////////////////
#define _SetUSB_AVIL4(wRegValue)        (USB->EP4_AVIL  = (u16)wRegValue)


////////////////////////////////////////////////////////////////////////////////
/// @brief GetUSB_FIFOn NUM
////////////////////////////////////////////////////////////////////////////////
#define _GetUSB_AVILn(n)                (*(u32*)((u32)(&(USB->EP0_AVIL))+(n)*4))


////////////////////////////////////////////////////////////////////////////////
/// @brief SetUSB_CTRL0
////////////////////////////////////////////////////////////////////////////////
#define _SetUSB_CTRL0(wRegValue)        (USB->EP0_CTRL  = (u16)wRegValue)

////////////////////////////////////////////////////////////////////////////////
/// @brief GetUSB_CTRL0
////////////////////////////////////////////////////////////////////////////////
#define _GetUSB_CTRL0()                 (USB->EP0_CTRL)


////////////////////////////////////////////////////////////////////////////////
/// @brief SetUSB_CTRL1
////////////////////////////////////////////////////////////////////////////////
#define _SetUSB_CTRL1(wRegValue)        (USB->EP1_CTRL  = (u16)wRegValue)

////////////////////////////////////////////////////////////////////////////////
/// @brief GetUSB_CTRL1
////////////////////////////////////////////////////////////////////////////////
#define _GetUSB_CTRL1()                 (USB->EP1_CTRL)


////////////////////////////////////////////////////////////////////////////////
/// @brief SetUSB_CTRL2
////////////////////////////////////////////////////////////////////////////////
#define _SetUSB_CTRL2(wRegValue)        (USB->EP2_CTRL  = (u16)wRegValue)

////////////////////////////////////////////////////////////////////////////////
/// @brief GetUSB_CTRL2
////////////////////////////////////////////////////////////////////////////////
#define _GetUSB_CTRL2()                 (USB->EP2_CTRL)


////////////////////////////////////////////////////////////////////////////////
/// @brief SetUSB_CTRL3
////////////////////////////////////////////////////////////////////////////////
#define _SetUSB_CTRL3(wRegValue)        (USB->EP3_CTRL  = (u16)wRegValue)

////////////////////////////////////////////////////////////////////////////////
/// @brief GetUSB_CTRL3
////////////////////////////////////////////////////////////////////////////////
#define _GetUSB_CTRL3()                 (USB->EP3_CTRL)


////////////////////////////////////////////////////////////////////////////////
/// @brief SetUSB_CTRL4
////////////////////////////////////////////////////////////////////////////////
#define _SetUSB_CTRL4(wRegValue)        (USB->EP4_CTRL  = (u16)wRegValue)

////////////////////////////////////////////////////////////////////////////////
/// @brief GetUSB_CTRL4
////////////////////////////////////////////////////////////////////////////////
#define _GetUSB_CTRL4()                 (USB->EP4_CTRL)


////////////////////////////////////////////////////////////////////////////////
/// @brief SetUSB_FIFO0
////////////////////////////////////////////////////////////////////////////////
#define _SetUSB_FIFO0(wRegValue)        (USB->EP0_FIFO  = (u32)wRegValue&0xff)

////////////////////////////////////////////////////////////////////////////////
/// @brief GetUSB_FIFO0
////////////////////////////////////////////////////////////////////////////////
#define _GetUSB_FIFO0()                 (USB->EP0_FIFO )


////////////////////////////////////////////////////////////////////////////////
/// @brief SetUSB_FIFO1
////////////////////////////////////////////////////////////////////////////////
#define _SetUSB_FIFO1(wRegValue)        (USB->EP1_FIFO  = (u16)wRegValue)

////////////////////////////////////////////////////////////////////////////////
/// @brief GetUSB_FIFO1
////////////////////////////////////////////////////////////////////////////////
#define _GetUSB_FIFO1()                 (USB->EP1_FIFO )


////////////////////////////////////////////////////////////////////////////////
/// @brief SetUSB_FIFO2
////////////////////////////////////////////////////////////////////////////////
#define _SetUSB_FIFO2(wRegValue)        (USB->EP2_FIFO  = (u16)wRegValue)

////////////////////////////////////////////////////////////////////////////////
/// @brief GetUSB_FIFO0
////////////////////////////////////////////////////////////////////////////////
#define _GetUSB_FIFO2()                 (USB->EP2_FIFO )


////////////////////////////////////////////////////////////////////////////////
/// @brief SetUSB_FIFO03
////////////////////////////////////////////////////////////////////////////////
#define _SetUSB_FIFO3(wRegValue)        (USB->EP3_FIFO  = (u16)wRegValue)

////////////////////////////////////////////////////////////////////////////////
/// @brief GetUSB_FIFO3
////////////////////////////////////////////////////////////////////////////////
#define _GetUSB_FIFO3()                 (USB->EP3_FIFO )


////////////////////////////////////////////////////////////////////////////////
/// @brief SetUSB_FIFO4
////////////////////////////////////////////////////////////////////////////////
#define _SetUSB_FIFO4(wRegValue)        (USB->EP4_FIFO  = (u16)wRegValue)

////////////////////////////////////////////////////////////////////////////////
/// @brief GetUSB_FIFO0
////////////////////////////////////////////////////////////////////////////////
#define _GetUSB_FIFO4()                 (USB->EP4_FIFO )


////////////////////////////////////////////////////////////////////////////////
/// @brief SetUSB_FIFO4
////////////////////////////////////////////////////////////////////////////////
#define _SetUSB_FIFOn(wRegValue,n)      (*(u32*)((u32)(&(USB->EP1_FIFO))+(n-1)*4) = (u16)wRegValue)

////////////////////////////////////////////////////////////////////////////////
/// @brief GetUSB_FIFO0
////////////////////////////////////////////////////////////////////////////////
#define _GetUSB_FIFOn(n)                (*(u32*)((u32)(&(USB->EP1_FIFO))+(n-1)*4))

////////////////////////////////////////////////////////////////////////////////
/// @brief SetUSB_HALT
////////////////////////////////////////////////////////////////////////////////
#define _SetUSB_HALT(wRegValue)         (USB->EP_HALT  |= (u16)wRegValue)

////////////////////////////////////////////////////////////////////////////////
/// @brief ClrUSB_HALT
////////////////////////////////////////////////////////////////////////////////
#define _ClrUSB_HALT(wRegValue)         (USB->EP_HALT  &= (u16)~wRegValue)

////////////////////////////////////////////////////////////////////////////////
/// @brief GetUSB_HALT
////////////////////////////////////////////////////////////////////////////////
#define _GetUSB_HALT()                  (USB->EP_HALT)

////////////////////////////////////////////////////////////////////////////////
/// @brief SetUSB_POWER
////////////////////////////////////////////////////////////////////////////////
#define _SetUSB_POWER(wRegValue)        (USB->POWER  |= (u16)wRegValue)

////////////////////////////////////////////////////////////////////////////////
/// @brief ClrUSB_TOP
////////////////////////////////////////////////////////////////////////////////
#define _ClrUSB_POWER(wRegValue)        (USB->POWER  &= (u16)~wRegValue)


/***********************************************/ //wenyang.du

////////////////////////////////////////////////////////////////////////////////
/// @brief PAKET_SIZE0
////////////////////////////////////////////////////////////////////////////////
#define _Set_PAKET_SIZE0(wRegValue)     (USB->PAKET_SIZE0 = (u8)wRegValue)
#define _Set_PAKET_SIZE1(wRegValue)     (USB->PAKET_SIZE1 = (u8)wRegValue)

/// @}

/// @}

/// @}

////////////////////////////////////////////////////////////////////////////////
#endif
////////////////////////////////////////////////////////////////////////////////
