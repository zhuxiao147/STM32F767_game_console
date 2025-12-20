#ifndef HID_REPORT_PARSER_H
#define HID_REPORT_PARSER_H
#include "app_init.h"

#define HID_KEYBOARD_MODIFIER_SHIFT  (0x02)
#define HID_KEYBOARD_MODIFIER_CTRL   (0x05)

extern const uint8_t keymap[128];
extern const uint8_t keymap_shift[128];
/**
 * @brief 解析HID报告
 * 
 * @param report  HID报告指针
 * @param len     HID报告长度
 * @param event   解析后的事件指针
 * @return hid_input_event_type_t  事件类型
 */
hid_input_event_type_t hid_parse_report(uint8_t *report, uint32_t len, hid_input_event_t *event);




#endif
