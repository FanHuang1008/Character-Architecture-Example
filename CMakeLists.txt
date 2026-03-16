cmake_minimum_required(VERSION 3.14)
project(char_arch)
message("===== Character Architecture =====")

set(CMAKE_CXX_STANDARD 17)

set(CHARACTER_ERR_MSG "Current version supports:
	Ranger, Mage, Warrior
	CMake will exit.")

if(NOT DEFINED CHARACTER)
    message(FATAL_ERROR "Missing CHARACTER!\n" ${CHARACTER_ERR_MSG})
endif()

if(${CHARACTER} STREQUAL "Ranger")
    add_library(character_impl src/ranger.cpp)
elseif(${CHARACTER} STREQUAL "Mage")
    add_library(character_impl src/mage.cpp)
elseif(${CHARACTER} STREQUAL "Warrior")
    add_library(character_impl src/warrior.cpp)
else()
    message(FATAL_ERROR "Unrecognized CHARACTER - ${CHARACTER}\n" ${CHARACTER_ERR_MSG})
endif()

target_include_directories(character_impl PUBLIC include)

add_executable(char_arch main.cpp)

target_link_libraries(char_arch
    PRIVATE character_impl
)
