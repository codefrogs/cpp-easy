// With a forward declare there is no need to include
// the header.
// For large projects, includes can take up a lot of time.

class Bread; // forward declare

class Oven
{
    public:
    Oven();
    ~Oven();

    void add(Bread *bread);
    void cook();

    private:
        Bread *m_bread;
};


