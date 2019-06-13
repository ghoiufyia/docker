1.需要安装docker，可以使用.tool/insatll脚本，或者官网安装https://docs.docker.com/install/linux/docker-ce/centos/
2.修改配置参数：.tool/env.sh
3.生成镜像：make build
4.运行：修改shadowsocks.json，修改端口，密码，加密协议，然后运行容器，指定port和配置文件，例子如.tools/run.sh
5.查看已经启动的容器：docker ps
6.防火墙：如果有防火墙，请开启对应端口，
    firewall-cmd --permanent --add-port=8838/tcp
    firewall-cmd --reload
    firewall-cmd --list-ports