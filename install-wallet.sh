#!/bin/bash

sudo apt-get update
sudo apt-get upgrade -y

sudo apt-get install libzmq3-dev libminiupnpc-dev libssl-dev libevent-dev -y
sudo apt-get install build-essential libtool autotools-dev automake pkg-config -y
sudo apt-get install libssl-dev libevent-dev bsdmainutils software-properties-common -y

sudo apt-get install libboost-all-dev -y

# Berkley 4.8
sudo add-apt-repository ppa:bitcoin/bitcoin
sudo apt-get update
sudo apt-get install libdb4.8-dev libdb4.8++-dev wget -y

sudo ufw allow 12225/tcp

wget https://www.bitcoinmonster.com/release/bitcoinmonstercore-latest-linux64.tar.gz
tar -xvzf bitcoinmonstercore-latest-linux64.tar.gz
cd BTCMonstercore*/bin
cp bitcoinmonster-cli bitcoinmonsterd /bin/

