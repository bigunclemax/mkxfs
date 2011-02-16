add_executable(mkifs
        mkxfs/mkxfs.c
        mkxfs/parse_file_attr.c
        mkxfs/mk_image_fsys.c
        mkxfs/booter.c
        mkxfs/mk_flash_fsys_v3.c
        mkxfs/mk_flash_fsys.c
        mkxfs/mkffs.c
        mkxfs/parse_file_attr.c
        mkxfs/parse_script_attr.c
        mkxfs/mk_et_fsys.c
        mkxfs/crc32.c)

target_include_directories(mkifs PUBLIC include/ ./)
target_compile_definitions(mkifs PUBLIC -D__LINUX__ -D__X86__ -DELF_TARGET_ARM)
target_link_libraries(mkifs -lz -llzo2 -lucl -lmd)