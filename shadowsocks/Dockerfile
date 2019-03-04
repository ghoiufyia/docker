FROM python:3

WORKDIR /usr/src/app

# copy requirements.txt ./

RUN pip install --upgrade pip
# RUN pip install --no-cache-dir -r requirements.txt
pip install shadowsocks

# COPY .shadowsocks.json ./

EXPOSE 8838

CMD [ "ssserver", "-c", "./shadowsocks.json","-d", "start" ]