#!/bin/bash

set -e

source $(dirname $0)/setenv.sh
set_env

echo "image is building..."
docker build -t ${DOCKER_USERNAME}/${PROJECT_NAME}:${TAG} .
printf "you image REPOSITORY is %s." ${DOCKER_USERNAME}/${PROJECT_NAME}:${TAG}
echo "please edit shadowsocks.json and docker run"