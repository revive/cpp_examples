namespace example {

    class Base {
    public:
        std::size_t size() const { return n; }
    protected:
        std::size_t n;
    };

    class Derived : private Base {
    public:
        using Base::size;
    protected:
        using Base::n;
    };

    struct Derv_Struct: Base {
        /* more things here */
    };

    class Derv_Class: Base {
        /* more things here */
    };
}
