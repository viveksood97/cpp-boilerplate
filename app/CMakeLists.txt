ADD_EXECUTABLE(shell-app main.cpp)
TARGET_LINK_LIBRARIES(shell-app boost_program_options)

include_directories(
    ${CMAKE_SOURCE_DIR}/include
)



