find_package(Boost COMPONENTS program_options REQUIRED)

ADD_EXECUTABLE(shell-app main.cpp)
TARGET_LINK_LIBRARIES(shell-app ${Boost_PROGRAM_OPTIONS_LIBRARY})

include_directories(
    ${CMAKE_SOURCE_DIR}/include
    ${Boost_INCLUDE_DIRS}
)



