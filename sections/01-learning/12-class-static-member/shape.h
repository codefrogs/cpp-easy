#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
    public:

      static Shape root;   

      Shape();
      Shape(const int id);

      int id(){ return m_id; }    

    private:
      int m_id;
};

#endif // SHAPE_H
