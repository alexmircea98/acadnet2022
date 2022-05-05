FROM mysql:5.7

ENV MYSQL_DATABASE=journalapp MYSQL_USER=guest MYSQL_PASSWORD=secretpasswordlab08-1337
ENV MYSQL_ROOT_PASSWORD=SECRETROOTPASSWORD123

ADD database.sql /docker-entrypoint-initdb.d/

