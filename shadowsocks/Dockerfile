FROM python:3.7

WORKDIR /usr/src/app

# copy requirements.txt ./

RUN pip install --upgrade pip
# RUN pip install --no-cache-dir -r requirements.txt
RUN pip install shadowsocks

COPY repair.sh ./
RUN sh ./repair.sh

RUN awk '/EVP_CIPHER_CTX_cleanup/{print $0}'

RUN awk '/EVP_CIPHER_CTX_reset/{print $0}'

# COPY .shadowsocks.json ./

RUN cat ./shadowsocks.json

EXPOSE 8838

CMD [ "ssserver", "-c", "./shadowsocks.json","-d", "start" ]