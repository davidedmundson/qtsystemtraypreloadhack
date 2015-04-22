This overloads QtSystemTray methods and will create a SNI instead.

Current state:
 - shows the system tray icon in a QLabel in a window to show it's workings

Next step:
 - create an SNI
 
Building:
qmake
make

Usage:
LD_PRELOAD=./libsystrayhack.so.1.0.0 /usr/share/spotify/spotify-client/spotify

note that
LD_PRELOAD=./libsystrayhack.so.1.0.0 spotify doesn't seem to work.

In theory you can add auto preload scripts using /etc/preload.d.conf no idea how that works