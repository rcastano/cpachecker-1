FROM ubuntu:16.04

RUN mkdir /home/benchs/
RUN apt-get -y update
RUN apt-get install -y git
RUN apt-get install -y python3

RUN apt-get install -y software-properties-common
RUN add-apt-repository ppa:webupd8team/java
RUN apt-get -y update

RUN echo debconf shared/accepted-oracle-license-v1-1 select true | debconf-set-selections
RUN echo debconf shared/accepted-oracle-license-v1-1 seen true | debconf-set-selections
RUN apt-get install -y oracle-java8-installer
RUN apt-get install -y ant
RUN apt-get install -y python



ADD download_repository.sh /home/download_repository.sh

ADD setup_benchexec_systemd.sh /home/setup_benchexec_systemd.sh
RUN /home/setup_benchexec_systemd.sh

RUN /home/download_repository.sh
