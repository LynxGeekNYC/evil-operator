# evil-operator
Evil operator dials and connects 2 or more phones together. Similar to what Prankdial.com had.

Requirements:
=============
- Asterisk Server and FreePBX
- SIP Trunk Service

Installation:
=============
1.) Create a conference Bridge
2.) Copy the dialplan / call context (merge-context.txt) details into your custom extension configuration file 

Usage:
======
1.) There are 2 callfiles (callfile1.bak and callfile2.bak). You can also make multiple other callfiles. Each callfile connects one person. If you need to connect multiple people, then you will need to copy multiple callfiles (callfile1.back, callfile2.bak, callfile3.bak, etc).
2.) Configure merge.sh:
