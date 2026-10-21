cmake_minimum_required(VERSION 3.25)
project(AutoDecoMod)

find_package(Geode REQUIRED)

add_geode_mod(AutoDecoMod)

target_sources(AutoDecoMod PRIVATE
    src/main.cpp
)
