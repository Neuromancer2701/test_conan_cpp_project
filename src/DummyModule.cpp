module;

#include <spdlog/spdlog.h>

module DummyModule;

namespace dummynamespace {

DummyModule::DummyModule()
{
  /* Empty */
}

DummyModule::~DummyModule() noexcept = default;

DummyModule::foo()
{
  fmt::print("Hello, from {}\n", "foo");
}

}// namespace dummynamespace
