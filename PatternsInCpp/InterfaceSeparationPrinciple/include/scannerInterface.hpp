#ifndef __SCANNERINTERFACE_HPP__
#define __SCANNERINTERFACE_HPP__

#include <memory>
#include <vector>

#include "document.hpp"

class ScannerInterface {
public:
  virtual void scan(std::vector<std::shared_ptr<Document>> documents) = 0;
};

#endif // __SCANNERINTERFACE_H__