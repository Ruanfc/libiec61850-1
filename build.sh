#!/usr/bin/env bash
mkdir -p build-esp32
cd build-esp32
rm -r * .cmake .bin*
cmake --toolchain=/home/ruan_fc/esp/esp-idf/tools/cmake/toolchain-esp32.cmake ..
#cmake -DCMAKE_TOOLCHAIN_FILE=/home/ruan_fc/esp/esp-idf/tools/cmake/toolchain-esp32.cmake ..
#cmake -G Ninja -DCMAKE_TOOLCHAIN_FILE=/home/ruan_fc/esp/esp-idf/tools/cmake/toolchain-esp32.cmake ..
# make $1
cmake --build . --config Debug --target all -- -j 14
