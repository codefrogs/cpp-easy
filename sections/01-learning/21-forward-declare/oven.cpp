#include "oven.h"
#include "bread.h"

Oven::Oven():m_bread(nullptr)
{
}

Oven::~Oven()
{
    delete m_bread;
    m_bread = nullptr;
}

void Oven::add(Bread *bread)
{
    m_bread = bread;
}

void Oven::cook()
{
    m_bread->cook(); // to use this function, we include 'bread.h'.
}