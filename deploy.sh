sudo dfu-programmer atmega32u4 erase --force && \
    sudo dfu-programmer atmega32u4 flash .build/dz60_ale7canna.hex && \
    sudo dfu-programmer atmega32u4 reset
