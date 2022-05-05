IMAGE_PREFIX=acadnet-

all: web mysql

web:
	docker build -t "$(IMAGE_PREFIX)web-server" web-server-docker

mysql:
	docker build -t "$(IMAGE_PREFIX)mysql" mysql-docker

server:
	docker build -t "$(IMAGE_PREFIX)server" ubuntu-server-docker

run_mysql:
	docker run --rm --name mysql -it "$(IMAGE_PREFIX)mysql"

run_web:
	docker run --rm --link mysql:mysql -p 8080:8080 "$(IMAGE_PREFIX)web-server"

run_server:
	docker run --rm --name server -p 1377:1377 -it "$(IMAGE_PREFIX)server"

push: web mysql
	docker push "$(IMAGE_PREFIX)mysql"
	docker push "$(IMAGE_PREFIX)web-server"

