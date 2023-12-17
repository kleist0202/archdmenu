#!/usr/bin/bash

VAR="$(echo -e ":b Shutdown\n:b 累Reboot\n:b Logout\n:b Hibernate" | dmenu -c -bw 3 -l 10 -i -p "?")"
echo $VAR
case "$VAR" in
    ':b Shutdown') poweroff;;
    ':b 累Reboot') reboot;;
    ':b Logout') kill -TERM -$(pidof dwm);;
    ':b Hibernate') systemctl hibernate;;
esac

