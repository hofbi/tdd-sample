include(CTest)
enable_testing()

FetchContent_Declare(
  googletest
  GIT_REPOSITORY git://github.com/google/googletest.git
  GIT_TAG origin/main)

FetchContent_GetProperties(googletest)
if(NOT googletest_POPULATED)
  FetchContent_Populate(googletest)
  add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})
endif()

include(GoogleTest)
