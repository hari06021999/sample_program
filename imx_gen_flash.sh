#!/bin/bash

TOOLCHAIN_PATH=~/01_OASYS/gcc-linaro-5.3-2016.02-x86_64_aarch64-elf/bin/
PROJECT_PATH=~/Hari/docs/DS-5Workspace/simple_program/
MKIMG_PATH=~/Hari/imx-mkimage/

cd ${PROJECT_PATH}
cp imx8m.bin ${MKIMG_PATH}/iMX8M/

#Generate flash binary
cd ${MKIMG_PATH}
make clean
make SOC=iMX8M flash_evk
cp iMX8M/flash.bin ${PROJECT_PATH}

#Copy .axf file to TOOLCHAIN_PATH for symbols
cp ${PROJECT_PATH}/output.elf ${TOOLCHAIN_PATH}

cd ~
