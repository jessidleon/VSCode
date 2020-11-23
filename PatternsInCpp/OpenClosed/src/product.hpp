#ifndef __PRODUCT_H__
#define __PRODUCT_H__

#include <string>
#include <memory>

#include "color.hpp"
#include "size.hpp"

class Product {
private:
  Product(const std::string& _name, const Color& _color, const Size& _size);
  std::string name;
  Color color;
  Size size;

public:
  static std::shared_ptr<Product> createProduct(const std::string& _name, const Color& _color, const Size& _size);
  std::string getName();
  Color getColor();
  Size getSize();
};





#endif  // __PRODUCT_H__