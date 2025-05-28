ssid=$(iwgetid -r)

if [ "$ssid" == "" ]; then
	printf 'Disconnected'
else
	printf '%s' "$ssid"
fi
