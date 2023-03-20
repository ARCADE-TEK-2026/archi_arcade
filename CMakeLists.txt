cmake_minimum_required(VERSION 3.13)  # CMake version check
project(Arcade)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 20)            # Enable c++14 standard
set(CMAKE_CXX_FLAGS_DEBUG -fno-gnu-unique)

# Add main.cpp file of project root directory as source file
set(SOURCE_FILES
        include/IGame.hpp
        include/IGraph.hpp
        include/IComponents.hpp
        include/ICore.hpp
        include/IEntity.hpp
        include/IEvent.hpp
        include/IEventHandler.hpp
        include/ISystem.hpp
        )
set(EXECUTABLE arcade)

# Add the SFML library to the project, uncomment the 2 line under
# if you want to use SFML:
find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)
find_package(SDL2 REQUIRED)
find_package(Curses REQUIRED)
include_directories(${SFML_INCLUDE_DIR})
include_directories(${CURSES_INCLUDE_DIR})
include_directories(${SDL2_INCLUDE_DIRS})
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS_DEBUG}")

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(${EXECUTABLE} ${SOURCE_FILES})
target_link_libraries(${EXECUTABLE} sfml-graphics sfml-window sfml-system sfml-audio ${CURSES_LIBRARIES} ${SDL2_LIBRARIES} ${CMAKE_DL_LIBS})
