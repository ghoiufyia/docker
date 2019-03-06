FROM shadowsocks/shadowsocks-libev

COPY shadowsocks.json /etc/

RUN find / -name shadowsocks*

EXPOSE 8838

CMD [ "ss-server", "-c", "/etc/shadowsocks.json" ]