#include "colorCriteria.hpp"


ColorCriteria::ColorCriteria(const Color& _color) : color{ _color } { }


bool ColorCriteria::isSatisfied(std::shared_ptr<Product> product_ptr) {
  return product_ptr->getColor() == color;
}
