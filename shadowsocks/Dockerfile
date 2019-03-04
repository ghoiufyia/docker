FROM python:3.7

WORKDIR /usr/src/app

# copy requirements.txt ./

RUN apt-get install openssl libssl-dev

RUN pip install --upgrade pip
# RUN pip install --no-cache-dir -r requirements.txt
RUN pip install shadowsocks

COPY repair.sh ./
RUN sh ./repair.sh

COPY shadowsocks.json ./

RUN awk '/EVP_CIPHER_CTX_reset/{print $o}'
RUN awk '/EVP_CIPHER_CTX_cleanup/{print $o}'


EXPOSE 8838

CMD [ "ssserver", "-c", "./shadowsocks.json","-d", "start" ]