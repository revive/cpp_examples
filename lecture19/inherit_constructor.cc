{
    class Base {
    public:
        Base () = default;
        Base (const std::string & str) : s{str} { }
    private:
        std::string s;
    };
    class Derived: public Base {
    public:
        Derived () = default;
        using Base::Base;

        Derived (const std::string & str) : Base(str) {}

private:
        int t;
    };

    
}
