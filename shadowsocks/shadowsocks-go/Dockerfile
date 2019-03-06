FROM golang:1.8


WORKDIR /go/src/app

RUN go get github.com/shadowsocks/shadowsocks-go/cmd/shadowsocks-server

# copy requirements.txt ./

COPY shadowsocks.json ./

EXPOSE 8388

CMD [ "shadowsocks-server", "-c", "./shadowsocks.json" ]