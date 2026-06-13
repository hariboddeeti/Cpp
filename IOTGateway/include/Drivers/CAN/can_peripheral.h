#ifndef CAN_PERIPHERAL_H
#define CAN_PERIPHERAL_H

#include <stdint.h>
#include <stdbool.h>

// Standard CAN speeds
typedef enum {
    CAN_SPEED_250K,
    CAN_SPEED_500K,
    CAN_SPEED_1M
} CanSpeed_t;

// Public Driver API
bool CAN_Peripheral_Init(CanSpeed_t speed);
bool CAN_Peripheral_WriteRaw(uint32_t id, const uint8_t *data, uint8_t len);
bool CAN_Peripheral_ReadRaw(uint32_t *id, uint8_t *data, uint8_t *len);

#endif

