#ifndef __COLORCRITERIA_H__
#define __COLORCRITERIA_H__

#include <memory>
#include "criteria.hpp"
#include "color.hpp"

class ColorCriteria : public Criteria {
public:
  ColorCriteria(const Color& _color);
  virtual bool isSatisfied(std::shared_ptr<Product> product_ptr) override;

private:
  Color color;
};
#endif // __COLORCRITERIA_H__