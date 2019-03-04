FROM python:3.7

WORKDIR /usr/src/app

# copy requirements.txt ./

RUN pip install --upgrade pip
# RUN pip install --no-cache-dir -r requirements.txt
RUN pip install shadowsocks

COPY repair.sh ./
RUN sh ./repair.sh

COPY shadowsocks.json ./

RUN cat ./shadowsocks.json

RUN cat /usr/src/app/shadowsocks.json


EXPOSE 8838

CMD [ "ssserver", "-c", "/usr/src/app/shadowsocks.json","-d", "start" ]