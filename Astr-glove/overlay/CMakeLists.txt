cmake_minimum_required (VERSION 1.0)


# Add source to this project's executable.
add_executable (Astr-glove_overlay WIN32 "main.cpp" "main.h")

target_include_directories("Astr-glove_overlay" PUBLIC "${OPENVR_INCLUDE_DIR}")
target_link_libraries("Astr-glove_overlay" PUBLIC "${OPENVR_LIB}")

add_custom_command(TARGET Astr-glove_overlay POST_BUILD
COMMAND ${CMAKE_COMMAND} -E copy_if_different
    "${PROJECT_SOURCE_DIR}/libraries/openvr/bin/win64/openvr_api.dll"
    $<TARGET_FILE_DIR:Astr-glove_overlay>)