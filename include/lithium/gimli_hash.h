#ifndef LITHIUM_GIMLI_HASH_H
#define LITHIUM_GIMLI_HASH_H

/*
 * Part of liblithium, under the Apache License v2.0.
 * SPDX-License-Identifier: Apache-2.0
 */

#include <lithium/gimli_state.h>

#include <stddef.h>

/* cffi:begin */

#define GIMLI_HASH_DEFAULT_LEN 32

typedef gimli_state gimli_hash_state;

void gimli_hash_init(gimli_hash_state *g);

void gimli_hash_update(gimli_hash_state *g, const unsigned char *input,
                       size_t len);

void gimli_hash_final(gimli_hash_state *g, unsigned char *output, size_t len);

void gimli_hash(unsigned char *output, size_t output_len,
                const unsigned char *input, size_t input_len);

/* cffi:end */

#endif /* LITHIUM_GIMLI_HASH_H */
