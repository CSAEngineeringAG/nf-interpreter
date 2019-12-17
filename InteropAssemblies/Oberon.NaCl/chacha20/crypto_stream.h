#ifndef crypto_stream_H
#define crypto_stream_H

#include "include/crypto_stream_chacha20.h"

#define crypto_stream crypto_stream_chacha20
#define crypto_stream_xor crypto_stream_chacha20_xor
#define crypto_stream_beforenm crypto_stream_chacha20_beforenm
#define crypto_stream_afternm crypto_stream_chacha20_afternm
#define crypto_stream_xor_afternm crypto_stream_chacha20_xor_afternm
#define crypto_stream_KEYBYTES crypto_stream_chacha20_KEYBYTES
#define crypto_stream_NONCEBYTES crypto_stream_chacha20_NONCEBYTES
#define crypto_stream_BEFORENMBYTES crypto_stream_chacha20_BEFORENMBYTES
#define crypto_stream_PRIMITIVE "chacha20"
#define crypto_stream_IMPLEMENTATION crypto_stream_chacha20_IMPLEMENTATION
#define crypto_stream_VERSION crypto_stream_chacha20_VERSION

#endif
