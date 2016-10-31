FROM ubuntu:16.04

RUN mkdir /home/benchs/
RUN apt-get -y update && apt-get install -y git
RUN apt-get -y update && apt-get install -y python3

RUN apt-get -y update && apt-get install -y software-properties-common
RUN add-apt-repository ppa:webupd8team/java

RUN echo debconf shared/accepted-oracle-license-v1-1 select true | debconf-set-selections
RUN echo debconf shared/accepted-oracle-license-v1-1 seen true | debconf-set-selections
RUN apt-get -y update && apt-get install -y oracle-java8-installer
RUN apt-get -y update && apt-get install -y ant
RUN apt-get -y update && apt-get install -y python

ADD setup_benchexec_systemd.sh /home/setup_benchexec_systemd.sh
RUN /home/setup_benchexec_systemd.sh

RUN apt-get -y update && apt-get install -y python-pip
RUN pip install matplotlib

COPY clean-repo/ /home/benchs/
