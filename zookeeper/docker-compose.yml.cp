version: "3"
services:
    zoo1:
        image: zookeeper:3.4
        restart: always
        container_name: zoo1
        volumes:
           # - ~/zoo1/conf/zoo.cfg:/conf/zoo.cfg
            - ./zoo1/data:/data
            - ./zoo1/datalog:/datalog
        ports:
            - "21811:2181"
        expose:
            - "2888"
            - "3888"
        networks:
            - net-zoo
    zoo2:
        image: zookeeper:3.4
        restart: always
        container_name: zoo2
        volumes:
            #- ~/zoo2/conf/zoo.cfg:/conf/zoo.cfg
            - ./zoo2/data:/data
            - ./zoo2/datalog:/datalog
        ports:
            - "21812:2181"
        expose:
            - "2888"
            - "3888"
        networks:
            - net-zoo
    zoo3:
        image: zookeeper:3.4
        restart: always
        container_name: zoo3
        volumes:
            #- ~/zoo3/conf/zoo.cfg:/conf/zoo.cfg
            - ./zoo3/data:/data
            - ./zoo3/datalog:/datalog
        ports:
            - "21813:2181"
        expose:
            - "2888"
            - "3888"
        networks:
            - net-zoo
networks:
    net-zoo:
        driver: "bridge"