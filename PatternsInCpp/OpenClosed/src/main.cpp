#include <memory>
#include <iostream>
#include <vector>

#include "product.hpp"
#include "filter.hpp"
#include "colorCriteria.hpp"

int main(int argc, char const* argv[]) {
  std::cout << "numer of args: " << argc << std::endl << std::flush;
  auto apple = Product::createProduct("apple", Color::red, Size::small);
  auto house = Product::createProduct("house", Color::green, Size::big);
  auto car = Product::createProduct("car", Color::green, Size::medium);

  std::vector<std::shared_ptr<Product>> things{ apple, house, car };

  Filter f;
  ColorCriteria redCriteria(Color::red);
  ColorCriteria greenCriteria(Color::green);

  auto filtered{ f.filter(things, greenCriteria) };

  for (auto& product_ptr : filtered) {
    std::cout << product_ptr->getName() << std::endl << std::flush;
  }


  // std::cout << "tengo que acostumbrarme a esto..." << std::endl << std::flush;
  return 0;
}
