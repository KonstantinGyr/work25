cmake_minimum_required(VERSION 3.20)

add_executable(computer cpu.cpp kbd.cpp disk.cpp main.cpp ram.cpp gpu.cpp ${INCLUDE_DIR}/ram.h
                ${INCLUDE_DIR}/cpu.h ${INCLUDE_DIR}/disc.h
                ${INCLUDE_DIR}/gpu.h ${INCLUDE_DIR}/kbd.h)
target_include_directories(computer PUBLIC ${INCLUDE_DIR})