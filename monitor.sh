#!/usr/bin/env bash
# cd build-esp32s3
cd build-$TARGET
python -m esp_idf_monitor -p /dev/ttyACM0 example_main.elf
