#!/bin/bash
COUNTER=$1
for (( c=1; c<=COUNTER; c++))
do
 ./local
 cp callfile.bak callfile.call
 chmod 777 callfile.call
 chown asterisk:asterisk callfile.call
 mv callfile.call /var/spool/asterisk/outgoing/
sleep 1
 ./local2
 cp callfile2.bak callfile.call
 chmod 777 callfile.call
 chown asterisk:asterisk callfile.call
 mv callfile.call /var/spool/asterisk/outgoing/  
sleep 1
echo "" 
echo -e "\e[31mCalling Victim 1:\e[0m"
 sed -n 1p callfile.bak 
echo -e "\e[31mUsing:\e[0m"
 sed -n 2p callfile.bak
 echo ""
echo -e "\e[31mMerging with:\e[0m"
 echo ""
echo -e "\e[31mCalling Victim 2:\e[0m"
 sed -n 1p callfile2.bak 
echo -e "\e[31mUsing:\e[0m"
 sed -n 2p callfile2.bak
done
