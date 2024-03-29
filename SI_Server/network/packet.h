#ifndef NETWORK_PACKET_H
#define NETWORK_PACKET_H

#include <stdint.h>

typedef struct Packet {
    uint32_t packet_id;
    uint32_t data_length;
    char data[];
} Packet;

char *packet_create(uint32_t packet_id, uint32_t data_length, char *data);

char *packet_create_handshake(int player_id);

#endif // NETWORK_PACKET_H
