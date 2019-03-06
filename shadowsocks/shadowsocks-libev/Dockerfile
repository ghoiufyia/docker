FROM shadowsocks/shadowsocks-libev

COPY shadowsocks.json /etc/

EXPOSE 8838

CMD [ "ss-server", "-c", "/etc/shadowsocks.json" ]