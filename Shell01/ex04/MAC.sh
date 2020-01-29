ifconfig | grep ether | sed "s/ether //g" | grep -v media | tr -d ' ' | tr -d '\t'
