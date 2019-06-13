FROM python:3.6-alpine

RUN apk add openssl-dev \
    && pip install --upgrade pip \
    && pip install shadowsocks
RUN sed -i 's/EVP_CIPHER_CTX_cleanup/EVP_CIPHER_CTX_reset/g' /usr/local/lib/python3.6/site-packages/shadowsocks/crypto/openssl.py

COPY shadowsocks.json /etc/shadowsocks.json

EXPOSE 8838

CMD [ "ssserver" , "-c" , "/etc/shadowsocks.json" ]