download:
	nbc -d -S=usb mission1.nxc moviment.nxc

compile:
	nbc -O=mission1 mission1.nxc moviment.nxc
run:
	nbc -d -S=usb mission1.nxc moviment.nxc