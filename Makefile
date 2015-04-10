download:
	nbc -d -S=usb mission1.nxc moviment.nxc

compile:
	nbc -O=mission1 moviment.nxc
run:
	nbc -d -S=usb mission1.nxc moviment.nxc