FROM node:13-alpine

ADD src/ /var/www/
WORKDIR /var/www/
EXPOSE 8080

RUN npm install

CMD node /var/www/server.js

