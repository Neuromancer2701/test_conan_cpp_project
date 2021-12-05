
module;

#include <spdlog/spdlog.h>

export module DummyModule;

export
namespace dummyNamespace {

    class DummyModule {
    public:
        /**
         * @brief Default Constructor.
         */
        explicit DummyModule()
                : dummy(2701) {}

        virtual ~DummyModule() noexcept = default;

        void foo() {
            fmt::print("Hello, from {} with {}\n", "foo", dummy);
        }

    private:
        int dummy;
    };


}// namespace dummyNamespace
