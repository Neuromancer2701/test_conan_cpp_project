
if (GCC OR CLANG)
  set(CMAKE_CXX_FLAGS "-fmodules-ts")
elseif(MSVC)
  set(CMAKE_CXX_FLAGS "/experimental:module")
endif()

find_package(fmt)
find_package(spdlog)
find_package(docopt)

# Generic test that uses conan libs
add_executable(intro main.cpp DummyModule-Interface.cpp DummyModule.cpp)
target_link_libraries(
  intro
  PRIVATE project_options
          project_warnings
          docopt::docopt
          fmt::fmt
          spdlog::spdlog)
