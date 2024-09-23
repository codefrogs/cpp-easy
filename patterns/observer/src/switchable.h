class Switchable
{
public:
    ~Switchable() = default; // As this is an interface.
    virtual bool isOn() const = 0;
};
