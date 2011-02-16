add_executable(dumpifs
        dumpifs/dumpifs.c)

target_include_directories(dumpifs PUBLIC include/ ./)
target_compile_definitions(dumpifs PUBLIC -D__LINUX__ -D__X86__ -DELF_TARGET_ARM)
target_link_libraries(dumpifs -lz -llzo2 -lucl -lmd)
