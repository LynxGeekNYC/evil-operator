# Please Donate!

I put a lot of work into these scripts so please donate if you can. Even $1 helps!

PayPal: alex@alexandermirvis.com

CashApp / Venmo: LynxGeekNYC

BitCoin: bc1q8sthd96c7chhq5kr3u80xrxs26jna9d8c0mjh7

Also please subscribe to my YouTube Channel to see how I use this script to decimate Indian Scammers: https://www.youtube.com/channel/UCAhfUHcEm_qQzhlLw5DnDsg?view_as=subscriber

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

output.cpp & output2.cpp - Will generate All CallerID Numbers in US (There are two files. output.cpp and output2.cpp These two files need to be compiled as output and output2). 
local.cpp & output2.cpp - Will generate All LOCAL (Must edit the CPP to change your local caller ID's) Caller ID numbers - (There are 2 files. They also both need to be compiled separately.)

Reason is... Each file changes the caller IP in separate callfile.

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

If the shell script doesn't work, try using "sudo sh ./bridge-all.sh 1"

Note:
1.) All the recordings are stored in: '/var/spool/asterisk/monitor' directory
2.) This is based on my original call flooder script. If you would like to test the flooder using this merge script you can enter a larger number after the shell script.

<h1 align="center">Hi 👋, I'm Lynx</h1>
<h3 align="center">I'm a Hacker (Cyber Security Professional), Author, YouTuber. I go after scammers and the Russian Federation Government. Glory to Ukraine! Glory to the Heroes! If you would like to support me, please donate via CashApp: $LynxGeekNYC</h3>

<p align="left"> <img src="https://komarev.com/ghpvc/?username=lynxgeeknyc&label=Profile%20views&color=0e75b6&style=flat" alt="lynxgeeknyc" /> </p>

<p align="left"> <a href="https://github.com/ryo-ma/github-profile-trophy"><img src="https://github-profile-trophy.vercel.app/?username=lynxgeeknyc" alt="lynxgeeknyc" /></a> </p>

<p align="left"> <a href="https://twitter.com/reallynxnyc" target="blank"><img src="https://img.shields.io/twitter/follow/reallynxnyc?logo=twitter&style=for-the-badge" alt="reallynxnyc" /></a> </p>

- 👯 I’m looking to collaborate on [Parking Finder](https://github.com/LynxGeekNYC/Parking-Detector)

- 👨‍💻 All of my projects are available at [https://github.com/LynxGeekNYC](https://github.com/LynxGeekNYC)

- 📝 I regularly write articles on [https://www.alexandermirvis.com](https://www.alexandermirvis.com)

- ⚡ Fun fact **I fly Planes**

<h3 align="left">Connect with me:</h3>
<p align="left">
<a href="https://twitter.com/reallynxnyc" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/twitter.svg" alt="reallynxnyc" height="30" width="40" /></a>
<a href="https://www.youtube.com/c/lynxnyc" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/youtube.svg" alt="lynxnyc" height="30" width="40" /></a>
<a href="https://discord.gg/cBSttr3" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/discord.svg" alt="cBSttr3" height="30" width="40" /></a>
</p>

<h3 align="left">Languages and Tools:</h3>
<p align="left"> <a href="https://www.cprogramming.com/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/c/c-original.svg" alt="c" width="40" height="40"/> </a> <a href="https://www.w3schools.com/cpp/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/cplusplus/cplusplus-original.svg" alt="cplusplus" width="40" height="40"/> </a> <a href="https://www.w3schools.com/css/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/css3/css3-original-wordmark.svg" alt="css3" width="40" height="40"/> </a> <a href="https://www.w3.org/html/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/html5/html5-original-wordmark.svg" alt="html5" width="40" height="40"/> </a> <a href="https://developer.mozilla.org/en-US/docs/Web/JavaScript" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/javascript/javascript-original.svg" alt="javascript" width="40" height="40"/> </a> <a href="https://www.linux.org/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/linux/linux-original.svg" alt="linux" width="40" height="40"/> </a> <a href="https://mariadb.org/" target="_blank" rel="noreferrer"> <img src="https://www.vectorlogo.zone/logos/mariadb/mariadb-icon.svg" alt="mariadb" width="40" height="40"/> </a> <a href="https://www.mysql.com/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/mysql/mysql-original-wordmark.svg" alt="mysql" width="40" height="40"/> </a> <a href="https://www.nginx.com" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/nginx/nginx-original.svg" alt="nginx" width="40" height="40"/> </a> <a href="https://nodejs.org" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/nodejs/nodejs-original-wordmark.svg" alt="nodejs" width="40" height="40"/> </a> <a href="https://developer.apple.com/library/archive/documentation/Cocoa/Conceptual/ProgrammingWithObjectiveC/Introduction/Introduction.html" target="_blank" rel="noreferrer"> <img src="https://www.vectorlogo.zone/logos/apple_objectivec/apple_objectivec-icon.svg" alt="objectivec" width="40" height="40"/> </a> <a href="https://opencv.org/" target="_blank" rel="noreferrer"> <img src="https://www.vectorlogo.zone/logos/opencv/opencv-icon.svg" alt="opencv" width="40" height="40"/> </a> <a href="https://pandas.pydata.org/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/2ae2a900d2f041da66e950e4d48052658d850630/icons/pandas/pandas-original.svg" alt="pandas" width="40" height="40"/> </a> <a href="https://www.php.net" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/php/php-original.svg" alt="php" width="40" height="40"/> </a> <a href="https://www.postgresql.org" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/postgresql/postgresql-original-wordmark.svg" alt="postgresql" width="40" height="40"/> </a> <a href="https://www.python.org" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/python/python-original.svg" alt="python" width="40" height="40"/> </a> <a href="https://reactjs.org/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/react/react-original-wordmark.svg" alt="react" width="40" height="40"/> </a> </p>

<p><img align="left" src="https://github-readme-stats.vercel.app/api/top-langs?username=lynxgeeknyc&show_icons=true&locale=en&layout=compact" alt="lynxgeeknyc" /></p>

<p>&nbsp;<img align="center" src="https://github-readme-stats.vercel.app/api?username=lynxgeeknyc&show_icons=true&locale=en" alt="lynxgeeknyc" /></p>

<p><img align="center" src="https://github-readme-streak-stats.herokuapp.com/?user=lynxgeeknyc&" alt="lynxgeeknyc" /></p>
