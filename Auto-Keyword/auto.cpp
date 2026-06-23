#include <iostream>
using namespace std;

int Sum(int x, int y){
    return x + y;
}

int main(){

    //auto a;   //always needs a initializer
    auto b{10};
    auto c{20};
    auto sum{b + c};

    //float
    auto d{3.14f};
    auto add{b + d};
    auto product{c * 2.5f};

    auto result{Sum(b,c)};
    auto result1{Sum(d,b)};

    static auto f{2};
    const auto x{4};
    auto y{x};
    const auto var{x};

    auto &var1{x};

    auto *ptr{&x}; // * might cause confusion
    auto ptr1(&x);

    auto list = {1,2,3,4};
    //auto list0{1,2,3,4};
    auto list1{1};

    return 0;
}

/*
    Auto Keyword in C++ (C++11)

    The auto keyword allows the compiler to
    automatically deduce the type of a variable
    from its initializer.

    Rules:
        - An auto variable must have an initializer.
        - The compiler determines the type from
          the value or expression on the right side.

    Basic Usage

    Example:
        auto b{10};      // int
        auto d{3.14f};   // float

    Auto with Expressions

    Example:
        auto sum{b + c};

    Type Deduction:
        int + int -> int

    Example:
        auto add{b + d};

    Type Deduction:
        int + float -> float

    Example:
        auto product{c * 2.5f};

    Type Deduction:
        int * float -> float

    Auto with Function Calls

    Example:
        auto result{Sum(b,c)};

    The type is deduced from the function's
    return type.

    Sum() returns int.

    Therefore:
        result -> int

    Example:
        auto result1{Sum(d,b)};

    d is converted from float to int before
    being passed into Sum().

    Therefore:
        result1 -> int

    Auto with Qualifiers

    Example:
        static auto f{2};

    Type:
        static int

    Example:
        const auto x{4};

    Type:
        const int

    Auto and Const Removal

    Example:
        const auto x{4};
        auto y{x};

    Type:
        y -> int

    The top-level const qualifier is removed
    during type deduction.

    Example:
        const auto var{x};

    Type:
        const int

    Auto with References

    Example:
        auto &var1{x};

    Type:
        const int&

    References preserve const qualifiers.

    Auto with Pointers

    Example:
        auto *ptr{&x};

    Type:
        const int*

    Example:
        auto ptr1(&x);

    Type:
        const int*

    Pointer const qualifiers are preserved
    during type deduction.

    Auto with Initializer Lists

    Example:
        auto list = {1,2,3,4};

    Type:
        std::initializer_list<int>

    The initializer list is created because
    the brace-enclosed values appear on the
    right side of the assignment operator.

    Example:
        auto list0{1,2,3,4};

    Error

    Direct brace initialization with multiple
    values is not allowed for auto deduction.

    Example:
        auto list1{1};

    Type:
        int

    A single value inside braces allows normal
    type deduction.

    Quick Revision

        auto b{10};
            -> int

        auto d{3.14f};
            -> float

        auto sum{b + c};
            -> int

        auto add{b + d};
            -> float

        auto result{Sum(b,c)};
            -> int

        const auto x{4};
            -> const int

        auto y{x};
            -> int

        auto &var1{x};
            -> const int&

        auto *ptr{&x};
            -> const int*

        auto ptr1(&x);
            -> const int*

        auto list = {1,2,3,4};
            -> std::initializer_list<int>

        auto list1{1};
            -> int
*/