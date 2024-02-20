#!/usr/bin/env bash
#cd build-esp32
#cd build-esp32s3
cd build-$TARGET
python $IDF_PATH/components/esptool_py/esptool/esptool.py -p /dev/ttyACM0 write_flash @flash_project_args
python -m esp_idf_monitor -p /dev/ttyACM0 example_main.elf
