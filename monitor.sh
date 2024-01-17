#!/usr/bin/env bash
cd build-esp32
python -m esp_idf_monitor -p /dev/ttyACM0 example_main.elf
