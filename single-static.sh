#!/bin/bash
COUNTER=$1
for (( c=1; c<=COUNTER; c++))
do
 cp callfile.bak callfile.call
 chmod 777 callfile.call
 chown asterisk:asterisk callfile.call
 mv callfile.call /var/spool/asterisk/outgoing/
sleep 1
echo "" 
echo -e "\e[31mPushing Victim to Bridge:\e[0m"
 sed -n 1p callfile.bak 
 echo ""
done
