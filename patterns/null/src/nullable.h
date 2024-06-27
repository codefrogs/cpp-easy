#ifndef NULLABLE_H
#define NULLABLE_H

template<typename T>
class Nullable
{
    public:
    bool operator==(const Nullable& v);

    public:
      Nullable(bool is_null=false);

    static T Null; // We use this as our reference to null objects.

    bool isNull();
    void setNull(bool val=true){ m_is_null = val; }

    private:

    bool m_is_null = true;        
};

template<typename T>
T Nullable<T>::Null;  

template<typename T>
bool Nullable<T>::operator==(const Nullable<T>& v)
{
    if (&v == this ){
        return true;
    }
    return false;
}

template<typename T>
Nullable<T>::Nullable(bool is_null): m_is_null(is_null)
{
  if (dynamic_cast<Nullable*>(this) == &Null )
  {
    m_is_null = true ;
  }

}

template<typename T>
bool Nullable<T>::isNull(){ return m_is_null; }

#endif // NULLABLE_H
