FROM shadowsocks/shadowsocks-libev

COPY shadowsocks.1.json /etc/config.json

RUN find /etc -name shadowsocks*

EXPOSE 8838

CMD [ "ss-server", "-c", "/etc/config.json" ]