#ifndef __FILTER_H__
#define __FILTER_H__

#include <vector>
#include <memory>

#include "product.hpp"
#include "criteria.hpp"

class Filter {
public:
  std::vector<std::shared_ptr<Product>> filter(std::vector<std::shared_ptr<Product>> products, Criteria& criteria);

private:

};

#endif // __FILTER_H__