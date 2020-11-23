#ifndef __PRINTERINTERFACE_HPP__
#define __PRINTERINTERFACE_HPP__

#include <memory>
#include <vector>
#include "document.hpp"

class PrinterInterface {
public:
  virtual void print(std::vector<std::shared_ptr<Document>> documents) = 0;
};

#endif // __PRINTERINTERFACE_H__