download:
	nbc -d -S=usb mission1.nxc moviment.nxc
	nbc -d -S=usb mission2.nxc moviment.nxc sensor.nxc music.nxc
	nbc -d -S=usb mission3.nxc moviment.nxc sensor.nxc music.nxc

compile:
	nbc -O=mission1 mission1.nxc moviment.nxc sensor.nxc
	nbc -O=mission2 mission2.nxc moviment.nxc sensor.nxc
	nbc -O=mission2 mission2.nxc moviment.nxc sensor.nxc
run:
	nbc -d -S=usb mission1.nxc moviment.nxc