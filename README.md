# mkxfs
This is the port of **dumpifs** and **mkifs** for 64bit linux or macos that not required QNX SQP.
The main goal of this project is providing convenient tools for modification of ONX Image Filesystem (IFS) files.  

# Basic Idea
- Get firmware fw.ifs
- Unpack image to current folder by `dumpifs -xr fw.ifs` command
- Modify or replace extracted files
- Edit `buildfile.bld` to add or delete new files
- Modify boot script (located at `proc/boot/.script` by default)
- Pack modified content by `MKIFS_PATH=./ mkifs buildfile.bld repacked.ifs` command

## Dependencies
Following packages are required to compile:  
`liblz4-dev`, `liblzo2-dev`, `libucl-dev`, `libmd-dev`, `libz-dev`  
The above package names are for Debian/Ubuntu and may differ for other OSes.

## Configure and build
```
cd mkxfs
mkdir -p build && cd build/
cmake ../CMakeLists.txt -B ./
make
```

# Reference
The original code is from https://github.com/vocho/openqnx  
Inspired by https://github.com/askac/dumpifs  
