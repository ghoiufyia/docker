#!/bin/sh
sed -i '/EVP_CIPHER_CTX_cleanup/s@EVP_CIPHER_CTX_cleanup@EVP_CIPHER_CTX_reset@' /usr/local/lib/python3.7/site-packages/shadowsocks/crypto/openssl.py
