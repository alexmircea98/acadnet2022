#
# Ubuntu Dockerfile
#
# https://github.com/dockerfile/ubuntu
#

# Pull base image.
FROM ubuntu:18.04

# Install.
RUN \
  apt-get update && \
  DEBIAN_FRONTEND=noninteractive \
  TZ=Europe/Bucharest \ 
  apt-get -y upgrade && \
  apt-get install -y build-essential && \
  apt-get install -y software-properties-common && \
  apt-get install -y byobu curl git htop man unzip vim wget && \
  rm -rf /var/lib/apt/lists/* 
RUN apt-get install -y net-tools


RUN  rm -rf /var/lib/apt/lists/*
RUN apt-get autoclean  -y
RUN apt-get install openssh-server -y

RUN useradd -ms /bin/bash admin -p "$(openssl passwd -1 1337_pass)" 
USER admin
RUN touch /home/admin/flag.txt 
RUN echo "somepass" > /home/admin/flag.txt
USER root
RUN useradd -ms /bin/bash boss -p "$(openssl passwd -1 bossdeboss)" 
USER boss
RUN touch /home/boss/flag.txt 
RUN echo "somepass2" > /home/boss/flag.txt


USER root

# Add files.
ADD root/.bashrc /root/.bashrc
ADD root/.gitconfig /root/.gitconfig
ADD root/.scripts /root/.scripts
ADD etc/sudoers etc/sudoers
ADD etc/ssh_config etc/ssh/ssh_config

RUN chmod 220 /etc/sudoers
RUN chmod 322 etc/ssh/ssh_config
# RUN service ssh start
# RUN service ssh enable

# RUN echo 'server' | passwd --stdin root 

# Set environment variables.
ENV HOME /home/admin

# Define working directory.
WORKDIR /home/admin

USER admin
# Open the mapped port
EXPOSE 1337

# Define default command.
CMD ["bash"]
