#pragma once

namespace test
{
    template<>
    struct Foo< int >
    {
        static const int Id = 3;
    };

    int testFunc();
}
