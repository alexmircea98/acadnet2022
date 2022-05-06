#
# Ubuntu Dockerfile
#
# https://github.com/dockerfile/ubuntu
#

# Pull base image.
FROM ubuntu:18.04

RUN apt update && DEBIAN_FRONTEND=noninteractive TZ=Europe/Bucharest 

RUN apt install  openssh-server sudo -y

RUN  echo 'root:server' | chpasswd

RUN apt-get install -y net-tools vim man wget

RUN useradd -ms /bin/bash admin -p "$(openssl passwd -1 1337_pass)" 
USER admin
RUN touch /home/admin/flag.txt 
RUN echo "CTF_ACAD{Somebody_has_to_save_our_skins}" > /home/admin/flag.txt
USER root
RUN useradd -ms /bin/bash boss -p "$(openssl passwd -1 bossdeboss)" 
USER boss
RUN touch /home/boss/flag.txt 
RUN echo "CTF_ACAD{Your_eyes_can_deceive_you}" > /home/boss/flag.txt
RUN chmod 600 /home/boss/flag.txt

USER root
run chmod u+s /usr/bin/vim
# Add files.
ADD etc/sudoers etc/sudoers
ADD etc/ssh_config etc/ssh/ssh_config

RUN chmod 220 /etc/sudoers
RUN chmod 322 /etc/ssh/ssh_config

# RUN echo 'server' | passwd --stdin root 

# Set environment variables.
ENV HOME /home/admin

# Define working directory.
WORKDIR /home/admin

RUN service ssh start
# Open the mapped port
EXPOSE 22

# Define default command.
CMD ["/usr/sbin/sshd","-D"]
