file (GLOB SILNIA_SRC

"*.c"
"*.h"
)

add_library(silnia ${SILNIA_SRC})

target_include_directories(silnia PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
