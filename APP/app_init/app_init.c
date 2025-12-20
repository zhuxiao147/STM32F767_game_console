#include "app_init.h"
QueueHandle_t HIDInputEventQueue;

void HID_EventQueue_Init(void)
{
    HIDInputEventQueue = xQueueCreate(
        8,                  // 最多缓存 8 个 HID 事件
        sizeof(hid_input_event_t)
    );

    configASSERT(HIDInputEventQueue);
}
