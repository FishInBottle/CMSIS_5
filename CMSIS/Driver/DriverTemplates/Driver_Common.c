#include "Driver_Common.h"

uint32_t ARM_COMMON_GetRegBase(ARM_DRV_ID_t drv_id)
{
#if (CHIP_TYPE == CHIP_TYPE_STM32)
    switch (drv_id)
    {
    case ARM_DRV_CAN:
        return 0x40006400; // Example base address for CAN peripheral
    case ARM_DRV_ETH_MAC:
        return 0x40028000; // Example base address for Ethernet MAC peripheral
    case ARM_DRV_ETH_PHY:
        return 0x40029000; // Example base address for Ethernet PHY peripheral
    case ARM_DRV_FLASH:
        return 0x40022000; // Example base address for Flash peripheral
    case ARM_DRV_I2C:
        return 0x40005400; // Example base address for I2C peripheral
    case ARM_DRV_MCI:
        return 0x40012C00; // Example base address for MCI peripheral
    case ARM_DRV_NAND:
        return 0x40013400; // Example base address for NAND peripheral
    case ARM_DRV_SAI:
        return 0x40015000; // Example base address for SAI peripheral
    case ARM_DRV_SPI:
        return 0x40013000; // Example base address for SPI peripheral
    case ARM_DRV_STORAGE:
        return 0x4001A000; // Example base address for Storage peripheral
    case ARM_DRV_USART:
        return 0x40013800; // Example base address for USART peripheral
    case ARM_DRV_USBD:
        return 0x4001C000; // Example base address for USB Device peripheral
    case ARM_DRV_USBH:
        return 0x4001D000; // Example base address for USB Host peripheral
    case ARM_DRV_WIFI:
        return 0x4001E000; // Example base address for Wi-Fi peripheral
    default:
        return 0; // Invalid driver ID
    }
#elif (CHIP_TYPE == CHIP_TYPE_NXP)
    switch (drv_id)
    {
    case ARM_DRV_CAN:
        return 0x40000000; // Example base address for CAN peripheral
    case ARM_DRV_ETH_MAC:
        return 0x40001000; // Example base address for Ethernet MAC peripheral
    case ARM_DRV_ETH_PHY:
        return 0x40002000; // Example base address for Ethernet PHY peripheral
    case ARM_DRV_FLASH:
        return 0x40003000; // Example base address for Flash peripheral
    case ARM_DRV_I2C:
        return 0x40004000; // Example base address for I2C peripheral
    case ARM_DRV_MCI:
        return 0x40005000; // Example base address for MCI peripheral
    case ARM_DRV_NAND:
        return 0x40006000; // Example base address for NAND peripheral
    case ARM_DRV_SAI:
        return 0x40007000; // Example base address for SAI peripheral
    case ARM_DRV_SPI:
        return 0x40008000; // Example base address for SPI peripheral
    case ARM_DRV_STORAGE:
        return 0x40009000; // Example base address for Storage peripheral
    case ARM_DRV_USART:
        return 0x4000A000; // Example base address for USART peripheral
    case ARM_DRV_USBD:
        return 0x4000B000; // Example base address for USB Device peripheral
    case ARM_DRV_USBH:
        return 0x4000C000; // Example base address for USB Host peripheral
    case ARM_DRV_WIFI:
        return 0x4000D000; // Example base address for Wi-Fi peripheral
    default:
        return 0; // Invalid driver ID
    }
#else
    #error "Unsupported CHIP_TYPE"
#endif
}

#if (CHIP_TYPE == CHIP_TYPE_STM32)
uint32_t ARM_COMMON_GetClockFreq(ARM_DRV_ID_t drv_id)
{
    switch (drv_id)
    {
    case ARM_DRV_CAN:
        return 80000000; // Example clock frequency for CAN peripheral
    case ARM_DRV_ETH_MAC:
        return 100000000; // Example clock frequency for Ethernet MAC peripheral
    case ARM_DRV_ETH_PHY:
        return 25000000; // Example clock frequency for Ethernet PHY peripheral
    case ARM_DRV_FLASH:
        return 40000000; // Example clock frequency for Flash peripheral
    case ARM_DRV_I2C:
        return 100000; // Example clock frequency for I2C peripheral
    case ARM_DRV_MCI:
        return 50000000; // Example clock frequency for MCI peripheral
    case ARM_DRV_NAND:
        return 20000000; // Example clock frequency for NAND peripheral
    case ARM_DRV_SAI:
        return 48000; // Example clock frequency for SAI peripheral
    case ARM_DRV_SPI:
        return 1000000; // Example clock frequency for SPI peripheral
    case ARM_DRV_STORAGE:
        return 25000000; // Example clock frequency for Storage peripheral
    case ARM_DRV_USART:
        return 115200; // Example clock frequency for USART peripheral
    case ARM_DRV_USBD:
        return 48000000; // Example clock frequency for USB Device peripheral
    case ARM_DRV_USBH:
        return 48000000; // Example clock frequency for USB Host peripheral
    case ARM_DRV_WIFI:
        return 24000000; // Example clock frequency for Wi-Fi peripheral
    default:
        return 0; // Invalid driver ID
    }
}
#endif
