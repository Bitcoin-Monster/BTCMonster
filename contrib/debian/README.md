
Debian
====================
This directory contains files used to package banqd/bitcoinmonster-qt
for Debian-based Linux systems. If you compile banqd/bitcoinmonster-qt yourself, there are some useful files here.

## bitcoinmonster: URI support ##


bitcoinmonster-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install bitcoinmonster-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your bitcoinmonster-qt binary to `/usr/bin`
and the `../../share/pixmaps/banq128.png` to `/usr/share/pixmaps`

bitcoinmonster-qt.protocol (KDE)

