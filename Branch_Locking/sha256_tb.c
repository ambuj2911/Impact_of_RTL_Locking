#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "sha256_impl_tb.h"
#include "sha256.h"
//#include "sha256_impl.c"

// Test Cases - must both be the same length!
// Generates "i" hashes of the virtual memory (built below) starting at the offset "bases[i]"
// and hashing a (virtual) memory region of size "sizes[i]"
const unsigned int bases[5] = { 0, 1,  0,   3,   0 };
const unsigned int sizes[5] = { 0, 1, 64, 127, 256 };
// TODO: better to have "golden" truths generated, read from file, process... version 1.0 thing...

int main(int argc, char *argv[])
{
   	//printf("%d key in string.\n",atoi(argv[1]));
	//int rtl_key = atoi(argv[1]);
   	int br_key = atoi(argv[1]);
	//int dp_key = atoi(argv[3]);
	//printf("%d rtl_key value in main \n",rtl_key);
	//printf("%d br_key value in main \n",br_key);
	unsigned char data[MAXDATASIZE];
	unsigned char digest[HASHSIZE];
	unsigned char sw_hash[HASHSIZE];  // truth hash from original algorithm
	unsigned int i, j;                // generic iterators
	unsigned int failures = 0;        // ideally it stays this way...
	SHA256_CTX ctx;                   // used to generate software hashes for validation

	// Fill virtual data array with something interesting to hash
	printf("Data to hash: ");
	for( i = 0; i < MAXDATASIZE; i++ ) {
		data[i] = 'A'+(i%26);
		printf("%c",data[i]);
	}
	printf("\n\n");

	// Process test cases
	for( j = 0; j < 5; j++ )
	{
		unsigned int base = bases[j];
		unsigned int size = sizes[j];

		printf("Test %d, base: %d length %d:\n", j, base, size);

		// Generate the "true" (software) hash - verified against online hash calculators

		sha256_init_tb(&ctx);
		sha256_update_tb(&ctx, &(data[base]), size);
		sha256_final_tb(&ctx, sw_hash);

		printf("SHA256_SW: ");
		for(i=0; i<32; i++) {
			printf("%02X ", sw_hash[i]);
		}
		printf("\n");

		// Generate the "hardware" hash - verified against the "true" hash computed above
		sha256( br_key, data, base, size, digest );

		printf("SHA256_HW: ");
		for(i=0; i< 32; i++ ) {
			printf("%02X ", digest[i]);
		}
		printf("\n");

		// Compare results
		if( strncmp(digest, sw_hash, 32) ) {
			printf("FAILED\n");
			failures++;
		}
		else {
			printf("PASSED\n");
		}
		printf("\n");
	}

	return failures;
}
