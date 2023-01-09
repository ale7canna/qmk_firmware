 docker build -t qmk .
docker run -it -v $(pwd):/qmk_firmware qmk make dz60:ale7canna:bin
1732  1/9/2023 10:18  sudo dfu-programmer atmega32u4 read
 1733  1/9/2023 10:18  sudo dfu-programmer atmega32u4 erase --force\n
 1734  1/9/2023 10:19  sudo dfu-programmer atmega32u4 flash .build/dz60_ale7canna.hex
 1735  1/9/2023 10:19  sudo dfu-programmer atmega32u4 reset
