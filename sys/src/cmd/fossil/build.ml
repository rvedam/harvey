.# once that works, this script from /usr/rob/dist/buildnotes
# should build.  note it cross-builds for a different arch
# because you can't overwrite running binaries safely.

NPROC=8
fileserver=emelie
objtype=386
cd /sys/src/ape
mk install # so awk can be cross-compiled (needs to run pcc for maketab)
cd /sys/src/cmd/vc
mk install
cd /sys/src/cmd/vl
mk install
cd /sys/src/cmd/va
mk install
mkdir /mips/bin/usb
objtype=mips
cd /sys/src
mk install
