#!/bin/bash

set -e

source $(dirname $0)/setenv.sh
set_env

docker build -t ${DOCKER_USERNAME}/${PROJECT_NAME}:${TAG} .