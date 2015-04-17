download:
	nbc -d -S=usb mission1.nxc moviment.nxc
	nbc -d -S=usb mission2.nxc moviment.nxc sensor.nxc

compile:
	nbc -O=mission1 mission1.nxc moviment.nxc
	nbc -O=mission2 mission2.nxc moviment.nxc
run:
	nbc -d -S=usb mission1.nxc moviment.nxc