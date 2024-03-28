#ifndef __BSP_H_
#define __BSP_H_

#ifdef __cplusplus
extern "C" {
#endif

#define FirmWareMajorVersion 1
#define FirmWareMinorVersion 0
#define FirmWareRevision 0
#define FirmWareVersionYear 2024
#define FirmWareVersionMonth 3
#define FirmWareVersionDate 28
#define ProtocolMajorVersion 1
#define ProtocolMinorVersion 0
#define ProtocolRevision 0
#define ProtocolVersionYear 2024
#define ProtocolVersionMonth 3
#define ProtocolVersionDate 28

#define ENABLE_INT() __set_PRIMASK(0)
#define DISABLE_INT() __set_PRIMASK(1)

#ifdef Enable_EventRecorder
#include "EventRecorder.h"
#endif

#ifdef STM32F429xx
#include "stm32f429xx.h"
#include "stm32f4xx_hal.h"
#endif
#include "arm_math.h"
#include "cmsis_os2.h"
#include "rtx_os.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "stdbool.h"

void bsp_Init(void);
void System_Init(void);

void Error_Handler(void);
void bsp_DelayUS(uint32_t n);

#ifdef __cplusplus
}
#endif

#endif
