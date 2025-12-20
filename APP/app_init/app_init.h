#ifndef APP_INIT_H
#define APP_INIT_H
#include <stdint.h>
#include "FreeRTOS.h"
#include "queue.h"
typedef enum
{
    HID_EVT_NONE = 0,
    HID_EVT_KEYBOARD,
    HID_EVT_MOUSE,
} hid_input_event_type_t;

typedef struct
{
    hid_input_event_type_t type;
    uint8_t dev_addr;
    uint8_t instance;

    union
    {
        struct
        {
            uint8_t modifier;
            uint8_t reserved;
            uint8_t keycode[6];
        } keyboard;

        struct
        {
            int8_t x;
            int8_t y;
            int8_t wheel;
            uint8_t buttons;
        } mouse;
    };
} hid_input_event_t;

extern QueueHandle_t HIDInputEventQueue;
void HID_EventQueue_Init(void);
#endif
