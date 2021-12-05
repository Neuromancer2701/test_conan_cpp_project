
find_package(fmt)
find_package(spdlog)
find_package(docopt)

add_compile_options(-fmodules-ts)

# Generic test that uses conan libs
add_executable(intro main.cpp DummyModule-Interface.cpp)
target_link_libraries(
  intro
  PRIVATE project_options
          project_warnings
          docopt::docopt
          fmt::fmt
          spdlog::spdlog)
