#include <lithium/sign.h>

int main(void)
{
    static unsigned char sig[LITH_SIGN_LEN];
    static const unsigned char secret_key[LITH_SIGN_SECRET_KEY_LEN];
    lith_sign_create(sig, NULL, 0, secret_key);
}