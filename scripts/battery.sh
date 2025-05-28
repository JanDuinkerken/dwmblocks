acpi -b | awk -F', ' '{print $2}' | tail -n1
