ifconfig | awk '/ether/' | tr -d " " | cut -c 7-
