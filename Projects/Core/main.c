/* Includes ----------------------------------------------------------*/
#include "bsp.h"

/* Typedef -----------------------------------------------------------*/

/* Define ------------------------------------------------------------*/

/* Macro -------------------------------------------------------------*/

/* Variables ---------------------------------------------------------*/

/* Function prototypes -----------------------------------------------*/

/* Functions ---------------------------------------------------------*/
int main(void)
{
  System_Init();
  bsp_Init();

  osKernelInitialize();

  osKernelStart();

  for (;;)
  {
  }
}

uint32_t osRtxErrorNotify (uint32_t code, void *object_id)
{
  (void)object_id;

  switch (code)
  {
    case osRtxErrorStackOverflow:
      // Stack overflow detected for thread (thread_id=object_id)
      break;
    case osRtxErrorISRQueueOverflow:
      // ISR Queue overflow detected when inserting object (object_id)
      break;
    case osRtxErrorTimerQueueOverflow:
      // User Timer Callback Queue overflow detected for timer (timer_id=object_id)
      break;
    case osRtxErrorClibSpace:
      // Standard C/C++ library libspace not available: increase OS_THREAD_LIBSPACE_NUM
      break;
    case osRtxErrorClibMutex:
      // Standard C/C++ library mutex initialization failed
      break;
    case osRtxErrorSVC:
      // Invalid SVC function called (function=object_id)
      break;
    default:
      // Reserved
      break;
  }
  for (;;)
  {
  }
}

void osRtxIdleThread (void *argument)
{
  (void)argument;

  for (;;)
  {
  }
}
