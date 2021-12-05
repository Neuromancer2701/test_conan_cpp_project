module;

#include <spdlog/spdlog.h>

module DummyModule;

namespace dummyNamespace {

    DummyModule::DummyModule(){

    }

    DummyModule::~DummyModule() noexcept = default;

    void DummyModule::foo() {
        fmt::print("Hello, from {}\n", "foo");
    }

}// namespace dummyNamespace
