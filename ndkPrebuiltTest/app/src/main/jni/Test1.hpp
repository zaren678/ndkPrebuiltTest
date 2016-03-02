#pragma once

namespace test
{

    template< typename T >
    struct Foo{};

    template< typename T >
    int useFoo() {
        using theFoo = Foo< T >;
        return theFoo::Id;
    }

}
