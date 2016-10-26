#pragma once
#include "headerlist.hpp"

class Alien : public GameEntity
{
public:
  Alien() = default;

  Alien(Point2D const & lbp, Point2D const & rtp,
       unsigned health, unsigned rate, unsigned speed, unsigned type)
    : GameEntity(lbp, rtp, "Alien", health, rate)
  {
    if (speed > 20) throw std::invalid_argument("Speed is less than 0!\n");
    if (type > 5) throw std::invalid_argument("Type is less than 0!\n");
    m_speed = speed;
    m_type = type;
  }

  ~Alien() override {}

  unsigned GetSpeed()
  {
    return m_speed;
  }

  void SetSpeed(unsigned speed)
  {
    try
    {
      if (speed > 20) throw std::invalid_argument("Speed is more than 20!\n");
      m_speed = speed;
    }
    catch (std::exception const & ex)
    {
      std::cerr << ex.what();
    }
  }

  unsigned GetType()
  {
    return m_type;
  }

  void SetType(unsigned type)
  {
    try
    {
      if (type > 5) throw std::invalid_argument("Type is more than 5!\n");
      m_type = type;
    }
    catch (std::exception const & ex)
    {
      std::cerr << ex.what();
    }
  }

private:
  unsigned m_speed = 0;
  unsigned m_type = 0;
};