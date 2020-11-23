#include "product.hpp"


Product::Product(const std::string& _name, const Color& _color, const Size& _size) : name{ _name }, color{ _color }, size{ _size }{
}

std::shared_ptr<Product> Product::createProduct(const std::string& _name, const Color& _color, const Size& _size) {
  return std::make_shared<Product>(Product(_name, _color, _size));
}

std::string Product::getName() {
  return name;
}

Color Product::getColor() {
  return color;
}

Size Product::getSize() {
  return size;
}
