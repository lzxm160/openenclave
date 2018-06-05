// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef _OE_HASH_H
#define _OE_HASH_H

#include <openenclave/bits/defs.h>

OE_EXTERNC_BEGIN

/* Message digest types supported by RSA and EC digital signing */
typedef enum _OE_HashType {
    OE_HASH_TYPE_SHA256,
    OE_HASH_TYPE_SHA512
} OE_HashType;

OE_EXTERNC_END

#endif /* _OE_HASH_H */
