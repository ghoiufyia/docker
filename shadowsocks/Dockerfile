FROM python:3.7

WORKDIR /usr/src/app

# RUN curl "https://bootstrap.pypa.io/get-pip.py" -o "get-pip.py"
# RUN python get-pip.py


# RUN apt-show-versions -a openssl
# RUN apt-show-versions -a libssl-dev
# RUN apt-get -y remove openssl libssl-dev
# RUN apt-get -y install openssl libssl-dev
# libssl-dev
# k-fips

# RUN curl -fsSL "https://www.openssl.org/source/openssl-1.0.2r.tar.gz" -o openssl.tar.gz \
#     && apt-get -y --purge remove openssl libssl-dev \
#     && mkdir -p openssl \
#     && tar -xf openssl.tar.gz -C openssl --strip-components=1 \
#     && rm openssl.tar.gz \
#     && ( \
#         cd openssl \
#         && ./config \
#         && make -j "$(nproc)" \
#         && make install \
#     ) \
#     && rm -r openssl

# copy requirements.txt ./
#  --prefix=/usr/local/openssl

RUN pip install --upgrade pip
# RUN pip install --no-cache-dir -r requirements.txt
RUN pip install shadowsocks

COPY repair.sh ./
RUN sh ./repair.sh

COPY shadowsocks.json ./

# RUN awk '/EVP_CIPHER_CTX_reset/{print $o}'
# RUN awk '/EVP_CIPHER_CTX_cleanup/{print $o}'

# RUN rm -f /usr/lib/x86_64-linux-gnu/libcrypto.so.1.1

RUN ls /usr/lib/x86_64-linux-gnu/libcrypto*

# RUN openssl version

# RUN ln -s /usr/lib/x86_64-linux-gnu/libcrypto.so.1.0.2 /usr/bin/libcrypto.so

# RUN cat /etc/ld.so.conf

RUN ldconfig
RUN ldconfig -p
EXPOSE 8838

CMD [ "ssserver", "-c", "./shadowsocks.json","-d", "start" ]