#pragma once

#define uchar unsigned char // 8-bit byte
#define uint unsigned int // 32-bit word

typedef struct {
   uchar data[64];
   uint datalen;
   uint bitlen[2];
   uint state[8];
} SHA256_CTX;

void sha256_init_tb(SHA256_CTX *ctx);
void sha256_update_tb(SHA256_CTX *ctx, uchar data1[], uint len);
void sha256_final_tb(SHA256_CTX *ctx, uchar hash[]);

