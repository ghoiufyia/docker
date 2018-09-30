# docker
生成 centos可以使用systemctl的镜像

1.使用生成镜像
docker build --rm -t ghoiufyia/centos7 .
2.运行,后台执行
docker run --privileged --name "master"  -tid -p 8000:80 -p 8001:3306 -p 8002:6379 -p 8003:8080 -p 8004:8888 ghoiufyia/centos7
3.开启容器运行
docker exec -ti "容器id" /bin/bash
4.开启容器
docker start "容器id"
5.关闭容器
docker stop "容器id"
6.将容器生成本地镜像
docker commit -m "v0.1" -a="ghoiufyia" "容器id" ghoiufyia/centos:v0.1
7.登陆
docker login
7.将容器上传
docker push 本地镜像名称
