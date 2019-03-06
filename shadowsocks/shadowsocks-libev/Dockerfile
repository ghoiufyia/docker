FROM shadowsocks/shadowsocks-libev

COPY shadowsocks.json ./

EXPOSE 8838

CMD [ "ss-server", "-c", "./shadowsocks.json" ]