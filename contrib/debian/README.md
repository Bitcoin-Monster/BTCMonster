
Debian
====================
This directory contains files used to package banqd/banq-qt
for Debian-based Linux systems. If you compile banqd/banq-qt yourself, there are some useful files here.

## banq: URI support ##


banq-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install banq-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your banq-qt binary to `/usr/bin`
and the `../../share/pixmaps/banq128.png` to `/usr/share/pixmaps`

banq-qt.protocol (KDE)

