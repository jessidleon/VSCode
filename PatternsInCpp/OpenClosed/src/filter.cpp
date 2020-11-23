#include "filter.hpp"

std::vector<std::shared_ptr<Product>> Filter::filter(std::vector<std::shared_ptr<Product>> products, Criteria& criteria) {
  std::vector<std::shared_ptr<Product>> filteredResults;

  for (auto& product_ptr : products) {
    if (criteria.isSatisfied(product_ptr)) {
      filteredResults.push_back(product_ptr);
    }
  }
  return filteredResults;
}
