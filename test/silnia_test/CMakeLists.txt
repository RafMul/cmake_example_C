cmake_minimum_required (VERSION 2.8.11)


project(tdd_silnia_test)





set(INCLUDE_DIRS
	../../Library
)

set(TEST_INCLUDE_DIRS
	.
)
set(SRCS
	../../Library/silnia.c
)
set(TEST_SRCS
  UTest.c
  
)
set(GLOBAL_DEFINES

)

add_executable(${CMAKE_PROJECT_NAME} ${SRCS} ${TEST_SRCS})
target_include_directories(${CMAKE_PROJECT_NAME} PRIVATE ${INCLUDE_DIRS} ${TEST_INCLUDE_DIRS})
target_compile_definitions(${CMAKE_PROJECT_NAME} PRIVATE ${GLOBAL_DEFINES})
target_compile_options(${CMAKE_PROJECT_NAME} PRIVATE -Wall -Wextra)


enable_testing()
add_test(tests ${CMAKE_PROJECT_NAME})
