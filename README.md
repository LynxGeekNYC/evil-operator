Please Donate:
==============
CashApp: LynxGeekNYC or 
PayPal: mirvisconsulting@gmail.com

Disclaimer
==========
THIS IS FOR EDUCATIONAL PURPOSES ONLY AND FOR STRESS TESTING YOUR OWN SYSTEM. I CANNOT BE HELD RESPONSIBLE FOR ANY MALICIOUS IMPLEMENTATION OF THESE SCRIPTS. THIS IS EXACTLY WHAT THE TITLE SAYS. THIS IS RECOMMENDED FOR TESTING YOUR OWN ABILITY TO HANDLE PHISHING ATTACKS WITHIN YOUR ORGANIZATION AND TO HEAR WHAT IT SOUNDS LIKE WHEN TWO CALLS GET MERGED TOGETHER. BY DEFAULT I LEFT ALL PROMPTS ENABLES.

Evil-Operator
=============
Evil operator dials and connects 2 or more phones together. Similar to what Prankdial.com had.

Requirements:
=============
- Asterisk Server and FreePBX
- SIP Trunk Service

Installation:
=============
1.) Create a conference Bridge (By Default, it's edited to extension 5000)
2.) Copy the dialplan / call context (merge-context.txt) details into your custom extension configuration file
3.) Compile the 2 C++ Files
all.cpp - Will generate All CallerID Numbers in US
local.cpp - Will generate All LOCAL (Must edit the CPP to change your local caller ID's) Caller ID numbers

Usage:
======
1.) There are 2 callfiles (callfile1.bak and callfile2.bak). You can also make multiple other callfiles. Each callfile connects one person. If you need to connect multiple people, then you will need to copy multiple callfiles (callfile1.back, callfile2.bak, callfile3.bak, etc).

2.) Before Merging Calls, it's always a good idea to dial into the Bridge extension to listen to the calls live due to the following:
- A lot of times, if it reaches a VM, the system may not hang up
- Calls do not go through so it may loop and may leave a very large audio file in your monitor folder

So it would be good to login to your CLI and Kill that channel

2.) There are 3 merge files:
bridge-all.sh - Merges 2 or more calls using ALL randomly generated US Based Caller ID numbers
bridge-local.sh - Merges 2 or more calls using ALL randomly generated Local Caller ID numbers based on what you edited in the C++ file
bridge-static.sh - Manually enter the caller ID file in the callback.bak files.

3.) Once you entered the phone numbers in the  and decided which type of call you would like to make, use this command to run the code:
'./bridge-all.sh 1'

Note:
1.) All the recordings are stored in: '/var/spool/asterisk/monitor' directory
2.) This is based on my original call flooder script. If you would like to test the flooder using this merge script you can enter a larger number after the shell script.
