file(GLOB MAIN_APP_SRC

"*.h"
"*.c"
)

add_executable(main_app ${MAIN_APP_SRC})
target_link_libraries(main_app LINK_PUBLIC silnia)
target_include_directories(main_app PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(main_app PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../Library)
