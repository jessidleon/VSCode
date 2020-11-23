#ifndef __CRITERIA_H__
#define __CRITERIA_H__

#include <memory>
#include "product.hpp"

class Criteria {
public:
  virtual bool isSatisfied(std::shared_ptr<Product> product_ptr) = 0;
};

#endif // __CRITERIA_H__