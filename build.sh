#!/usr/bin/env bash

#set -euo pipefail
# TARGET=esp32
TARGET=esp32s3
#TARGET=$1
#if [[ -n $TARGET ]]
#then
#    TARGET=esp32s3
#fi
export TOOLCHAIN=${HOME}/.espressif/tools/xtensa-esp-elf/esp-13.2.0_20230928/xtensa-esp-elf/bin/xtensa-${TARGET}-elf-
export TOOLCHAIN_ARG=${HOME}/esp/esp-idf/tools/cmake/toolchain-${TARGET}.cmake
mkdir -p build-${TARGET}
cd build-${TARGET}
rm -rf * .cmake .bin*
cmake --toolchain=${TOOLCHAIN_ARG} -DTARGET=${TARGET} ..
#cmake -DCMAKE_TOOLCHAIN_FILE=/home/ruan_fc/esp/esp-idf/tools/cmake/toolchain-esp32.cmake ..
#cmake -G Ninja -DCMAKE_TOOLCHAIN_FILE=/home/ruan_fc/esp/esp-idf/tools/cmake/toolchain-esp32.cmake ..
# make $1
cmake --build . --config Debug --target all -- -j 14
