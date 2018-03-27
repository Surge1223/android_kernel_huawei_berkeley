################################################################################

1. How to Build
- get Toolchain
From android git server, codesourcery and etc ..
- aarch64-linux-android-4.9

- edit Makefile
edit CROSS_COMPILE to right toolchain path(You downloaded).
Ex)   export PATH=$PATH:$(android platform directory you download)/prebuilts/gcc/linux-x86/aarch64/aarch64-linux-android-4.9/bin
Ex)   export CROSS_COMPILE=aarch64-linux-android-

$ mkdir ../out
$ make ARCH=arm64 O=../out merge_kirin970_defconfig
$ make ARCH=arm64 O=../out -j8

2. Output files
- Kernel : out/arch/arm64/boot/Image.gz
- module : out/drivers/*/*.ko

3. How to Clean
$ make ARCH=arm64 distclean
$ rm -rf out
################################################################################

mkdir ../out
cp arch/arm64/configs/merge_kirin970_defconfig ../out/.config
export ARCH=arm64
export SUBARCH=arm64
export KBUILD_BUILD_USER=root
export KBUILD_BUILD_HOST=berkeley
rm ../out/.version
export PATH=$PATH:~/krexus/prebuilts/gcc/linux-x86/aarch64/aarch64-linux-android-4.9/bin
export ARCH=arm64
export CROSS_COMPILE=aarch64-linux-android-
export KERNEL_DIR=`pwd`
export KERNELDIR=$KERNEL_DIR
make ARCH=arm64 O=../out merge_kirin970_defconfig
make ARCH=arm64 O=../out -j16

