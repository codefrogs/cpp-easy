#ifndef _VALUE_H
#define _VALUE_H

template<typename T>
class Value{
    
    public:
        Value(){}
        void add(const T& value){ m_val += value; }
        T value(){return m_val;}
        
    private:
    T m_val;
};

// An alternative way to defining the methods
// template<typename T>
// Value<T>::Value(){}

// template<typename T>
// void Value<T>::add(const T& value){ m_val += value; }

// template<typename T>
// T Value<T>::value(){return m_val;}

#endif // _VALUE_H