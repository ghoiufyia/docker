FROM php:7.2-fpm
RUN apt-get update && apt-get install -y \
        libfreetype6-dev \
        libjpeg62-turbo-dev \
        libpng-dev \
        git \
    && docker-php-ext-install -j$(nproc) iconv \
    && docker-php-ext-configure gd --with-freetype-dir=/usr/include/ --with-jpeg-dir=/usr/include/ \
    && docker-php-ext-install pdo_mysql mysqli zip \
    # && docker-php-ext-enable pdo pdo_mysql mysqli \
    && docker-php-ext-install -j$(nproc) gd \
    && pecl install redis-4.0.1 \
    && pecl install xdebug-2.6.0 \
    && pecl install swoole \
    && pecl install grpc \
    && pecl install protobuf \
    && docker-php-ext-enable redis xdebug swoole grpc protobuf

RUN curl -sS https://getcomposer.org/installer | php -- --install-dir=/usr/local/bin --filename=composer \
 && composer config -g repo.packagist composer https://packagist.phpcomposer.com

RUN mkdir /app
WORKDIR /app
ADD www /app

RUN composer install \
    && chown -R www-data:www-data /app \
    && chmod -R 0777 /app/storage
# RUN composer install --no-plugins --no-scripts --no-autoloader