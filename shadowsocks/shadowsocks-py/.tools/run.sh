#!/bin/bash

set -e

source $(dirname $0)/setenv.sh
set_env

docker run -tid -p "8838:8838" -v /Users/shangning/work/docker/shadowsocks/script/shadowsocks.json:/etc/shadowsocks.json ${DOCKER_USERNAME}/${PROJECT_NAME}:${TAG}