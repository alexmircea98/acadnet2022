all: web mysql server

web:
	docker build -t "acadnet-web-server" web-server-docker

mysql:
	docker build -t "acadnet-mysql" mysql-docker

server:
	docker build -t "acadnet-server" ubuntu-server-docker

run_mysql:
	docker run --rm --name mysql -it "acadnet-mysql"

run_web:
	docker run --rm --link mysql:mysql -p 8080:8080 "acadnet-web-server"

run_server:
	docker run --rm --name server -d -p 1377:22 "acadnet-server"

push: web mysql
	docker push "acadnet-mysql"
	docker push "acadnet-web-server"

