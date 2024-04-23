#ifndef RTE_COMPONENTS_H
#define RTE_COMPONENTS_H

/*
 * Define the Device Header File: 
 */
#ifdef STM32F405xx
#define CMSIS_device_header "stm32f405xx.h"
#endif
#ifdef STM32F429xx
#define CMSIS_device_header "stm32f429xx.h"
#endif

#define RTE_CMSIS_RTOS2             /* CMSIS-RTOS2 */
#define RTE_CMSIS_RTOS2_RTX5        /* CMSIS-RTOS2 Keil RTX5 */
#define RTE_CMSIS_RTOS2_RTX5_SOURCE /* CMSIS-RTOS2 Keil RTX5 Source */
#ifdef Enable_EventRecorder
#define RTE_CMSIS_View_EventRecorder
#define RTE_CMSIS_View_EventRecorder_DAP
#endif

#endif /* RTE_COMPONENTS_H */
